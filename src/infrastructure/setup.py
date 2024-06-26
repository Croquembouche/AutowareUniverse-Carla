from setuptools import setup

package_name = 'infrastructure'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='carla',
    maintainer_email='williamhecoin@yahoo.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'SSM = infrastructure.SSM:main',
            'MAP = infrastructure.MAP:main',
            'update = infrastructure.update:main',
        ],
    },
)
