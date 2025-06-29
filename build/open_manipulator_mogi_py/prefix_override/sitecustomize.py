import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/himanshu/ros2_ws/src/install/open_manipulator_mogi_py'
