import carla
import numpy as np
# -------------PyGame----------------
import pynput
from pynput.keyboard import Key, Controller
try:
    import pygame
    from pygame.locals import KMOD_CTRL
    from pygame.locals import KMOD_SHIFT
    from pygame.locals import K_0
    from pygame.locals import K_9
    from pygame.locals import K_BACKQUOTE
    from pygame.locals import K_BACKSPACE
    from pygame.locals import K_COMMA
    from pygame.locals import K_DOWN
    from pygame.locals import K_ESCAPE
    from pygame.locals import K_F1
    from pygame.locals import K_LEFT
    from pygame.locals import K_PERIOD
    from pygame.locals import K_RIGHT
    from pygame.locals import K_SLASH
    from pygame.locals import K_SPACE
    from pygame.locals import K_TAB
    from pygame.locals import K_UP
    from pygame.locals import K_a
    from pygame.locals import K_b
    from pygame.locals import K_c
    from pygame.locals import K_d
    from pygame.locals import K_f
    from pygame.locals import K_g
    from pygame.locals import K_h
    from pygame.locals import K_i
    from pygame.locals import K_l
    from pygame.locals import K_m
    from pygame.locals import K_n
    from pygame.locals import K_o
    from pygame.locals import K_p
    from pygame.locals import K_q
    from pygame.locals import K_r
    
    from pygame.locals import K_s
    from pygame.locals import K_t
    from pygame.locals import K_v
    from pygame.locals import K_w
    from pygame.locals import K_x
    from pygame.locals import K_z
    from pygame.locals import K_MINUS
    from pygame.locals import K_EQUALS
except ImportError:
    raise RuntimeError('cannot import pygame, make sure pygame package is installed')


# Render object to keep and pass the PyGame surface
class RenderObject(object):
    def __init__(self, width, height):
        init_image = np.random.randint(0,255,(height,width,3),dtype='uint8')
        self.surface = pygame.surfarray.make_surface(init_image.swapaxes(0,1))

# Camera sensor callback, reshapes raw data from camera into 2D RGB and applies to PyGame surface
def pygame_callback(data, obj):
    img = np.reshape(np.copy(data.raw_data), (data.height, data.width, 4))
    img = img[:,:,:3]
    img = img[:, :, ::-1]
    
    obj.surface = pygame.surfarray.make_surface(img.swapaxes(0,1))
# Control object to manage vehicle controls
class ControlObject(object):
    def __init__(self, veh):

        # Conrol parameters to store the control state
        self._vehicle = veh
        self._steer = 0
        self._throttle = False
        self._brake = False
        self._steer = None
        self._steer_cache = 0
        # A carla.VehicleControl object is needed to alter the 
        # vehicle's control state
        self._control = carla.VehicleControl()

    # Check for key press events in the PyGame window
    # and define the control state
    def parse_control(self, event):
        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_RETURN:
                self._vehicle.set_autopilot(False)
            if event.key == pygame.K_UP:
                self._throttle = True
            if event.key == pygame.K_DOWN:
                self._brake = True
            if event.key == pygame.K_RIGHT:
                self._steer = 1
            if event.key == pygame.K_LEFT:
                self._steer = -1
        if event.type == pygame.KEYUP:
            if event.key == pygame.K_UP:
                self._throttle = False
            if event.key == pygame.K_DOWN:
                self._brake = False
                self._control.reverse = False
            if event.key == pygame.K_RIGHT:
                self._steer = None
            if event.key == pygame.K_LEFT:
                self._steer = None

    # Process the current control state, change the control parameter
    # if the key remains pressed
    def process_control(self):

        if self._throttle: 
            self._control.throttle = min(self._control.throttle + 0.01, 1)
            self._control.gear = 1
            self._control.brake = False
        elif not self._brake:
            self._control.throttle = 0.0

        if self._brake:
            # If the down arrow is held down when the car is stationary, switch to reverse
            if self._vehicle.get_velocity().length() < 0.01 and not self._control.reverse:
                self._control.brake = 0.0
                self._control.gear = 1
                self._control.reverse = True
                self._control.throttle = min(self._control.throttle + 0.1, 1)
            elif self._control.reverse:
                self._control.throttle = min(self._control.throttle + 0.1, 1)
            else:
                self._control.throttle = 0.0
                self._control.brake = min(self._control.brake + 0.3, 1)
        else:
            self._control.brake = 0.0

        if self._steer is not None:
            if self._steer == 1:
                self._steer_cache += 0.03
            if self._steer == -1:
                self._steer_cache -= 0.03
            min(0.7, max(-0.7, self._steer_cache))
            self._control.steer = round(self._steer_cache,1)
        else:
            if self._steer_cache > 0.0:
                self._steer_cache *= 0.2
            if self._steer_cache < 0.0:
                self._steer_cache *= 0.2
            if 0.01 > self._steer_cache > -0.01:
                self._steer_cache = 0.0
            self._control.steer = round(self._steer_cache,1)

        # Ápply the control parameters to the ego vehicle
        self._vehicle.apply_control(self._control)


# Initialize the Carla client and get the world
client = carla.Client('localhost', 2000)
client.set_timeout(10.0)
world = client.get_world()

# Find the actor vehicle with rolename = "host"
ego_vehicle = None
actor_list = world.get_actors()
for actor in actor_list:
    if actor.attributes.get('role_name') == 'host_vehicle' and actor.type_id.startswith('vehicle'):
        ego_vehicle = actor
        break

if ego_vehicle is None:
    print('Error: Host Vehicle not found in the Carla world.')
    exit()

# Find the camera sensor in the world
host_front_camera = None
for actor in actor_list:
    
    # print(actor.parent, ego_vehicle)
    if actor.type_id == 'sensor.camera.rgb' and actor.parent.id == ego_vehicle.id :
        host_front_camera = actor
        # print(host_front_camera)
        break

if host_front_camera is None:
    print('Error: camera sensor not found in the Carla world.')
    exit()

# Get camera dimensions
image_w = int(host_front_camera.attributes["image_size_x"])
image_h = int(host_front_camera.attributes["image_size_y"])

# Instantiate objects for rendering and vehicle control
renderObject = RenderObject(image_w, image_h)
controlObject = ControlObject(ego_vehicle)

# Start camera with PyGame callback
host_front_camera.listen(lambda image: pygame_callback(image, renderObject))

# Initialise the display
pygame.init()
gameDisplay = pygame.display.set_mode((image_w,image_h), pygame.HWSURFACE | pygame.DOUBLEBUF)
pygame.display.set_caption('Host Front Camera')
# Draw black to the display
gameDisplay.fill((0,0,0))
gameDisplay.blit(renderObject.surface, (0,0))
pygame.display.flip()

# Game loop
crashed = False

while not crashed:
    # Advance the simulation time
    world.tick()
    # Update the display
    gameDisplay.blit(renderObject.surface, (0,0))
    # Get the speed of the ego vehicle and render it onto a transparent surface
    speed_ms = ego_vehicle.get_velocity().length()
    speed_kmh = round(speed_ms * 3.6, 1)
    speed_text = f"Speed: {speed_kmh} km/h"
    font = pygame.font.SysFont('Arial', 20)
    speed_surface = font.render(speed_text, True, (255, 255, 255), (0, 0, 0, 0))
    # Blit the image and speed surfaces onto the Pygame screen
    gameDisplay.blit(speed_surface, (20, 20))
    pygame.display.flip()
    # Process the current control state
    controlObject.process_control()
    # Collect key press events
    for event in pygame.event.get():
        # If the window is closed, break the while loop
        if event.type == pygame.QUIT:
            crashed = True

        # Parse effect of key press event on control state
        controlObject.parse_control(event)
    

# Stop camera and quit PyGame after exiting game loop
host_front_camera.stop()
pygame.quit()