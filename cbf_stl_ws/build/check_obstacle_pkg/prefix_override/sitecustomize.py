import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/user/exchange/omnibase_ws/cbf_stl_ws/install/check_obstacle_pkg'
