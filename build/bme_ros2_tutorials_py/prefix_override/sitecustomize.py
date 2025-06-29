import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/himanshu/ros2_ws/src/install/bme_ros2_tutorials_py'
