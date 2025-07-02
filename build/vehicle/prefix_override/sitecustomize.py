import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/media/william/mist2/william/Github/AutowareUniverse-Carla/install/vehicle'
