from setuptools import find_packages, setup

package_name = 'bme_ros2_tutorials_py'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='himanshu',
    maintainer_email='himanshu@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'py_hello_world = bme_ros2_tutorials_py.hello_world:main',
            'py_publisher = bme_ros2_tutorials_py.publisher:main',
            'python_publisher_with_parameter = bme_ros2_tutorials_py.publisher_oop:main',
            'py_subscriber = bme_ros2_tutorials_py.subscriber:main',
            'py_service_server = bme_ros2_tutorials_py.service_server:main',
            'py_service_client = bme_ros2_tutorials_py.service_client:main'
        ],
    },
)
