# Set the minimum version of CMake that is required.
cmake_minimum_required(VERSION 3.2)

# Set build variables, such as the build type, the c++ standard, and build requirements.
set (CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# create a project with the a name.
set(project_name main)
project( ${project_name} )


# find the directories of a package.
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )

# generate an executable from the program name.
add_executable( ${project_name} main.cpp )

# Link the librararies when compiling your code.
target_link_libraries( main ${OpenCV_LIBS} )
