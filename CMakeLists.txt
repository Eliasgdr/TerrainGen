cmake_minimum_required(VERSION 3.10)
project(terrain_gen)

set(CMAKE_CXX_STANDARD 17)

# Trouver les packages
set(CMAKE_PREFIX_PATH "C:/msys64/mingw64")

find_package(OpenGL REQUIRED)
find_package(PkgConfig REQUIRED)

pkg_search_module(GLFW REQUIRED glfw3)
pkg_search_module(GLEW REQUIRED glew)

include_directories(${OPENGL_INCLUDE_DIRS} ${GLFW_INCLUDE_DIRS} ${GLEW_INCLUDE_DIRS})
link_directories(${GLFW_LIBRARY_DIRS} ${GLEW_LIBRARY_DIRS})

add_executable(procedural_terrain src/main.cpp
        include/constants.hpp
        src/renderer.cpp
        include/renderer.hpp
        src/shader.cpp
        include/shader.hpp)

target_link_libraries(procedural_terrain
        ${OPENGL_LIBRARIES}
        ${GLFW_LIBRARIES}
        ${GLEW_LIBRARIES}
)
