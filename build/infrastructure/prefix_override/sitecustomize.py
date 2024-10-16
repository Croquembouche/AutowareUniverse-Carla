import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/media/william/blueicedrive/Github/AutowareUniverse-Carla/install/infrastructure'
