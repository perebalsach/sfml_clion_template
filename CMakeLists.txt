cmake_minimum_required(VERSION 3.28)
project(SFML_Template)

set(CMAKE_CXX_STANDARD 17)

# Point the SFML_DIR to your local copy of the framework 
set(SFML_DIR "W:/external_libs/SFML")
include_directories(${SFML_DIR}/include)
link_directories(${SFML_DIR}/lib)
add_definitions(-DSFML_STATIC)

add_executable(SFML_Template main.cpp)
target_link_libraries(${PROJECT_NAME} sfml-graphics sfml-audio sfml-system sfml-window)

