# SFML Clion Project Template
Basic SFML Setup project for CLion & Cmake

You will need:
- SFML in your system (I’m on OSX so I did a brew install sfml in the terminal)
- CMakeLists.txt
- FindSFML.cmake


### CMakeLists.txt :
```
cmake_minimum_required(VERSION 3.10)
# set the projectX name to the name of your project
project(projectX)

set(CMAKE_CXX_STANDARD 11)
# set(SOURCE_FILES main.cpp)

add_executable(projectX main.cpp)
#add_executable(Game ${SOURCE_FILES})


# Detect and add SFML
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
find_package(SFML 2 REQUIRED system window graphics network audio)
if(SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(${PROJECT_NAME} ${SFML_LIBRARIES})
endif()
```

### FindSFML.cmake :
```
cmake_minimum_required(VERSION 3.10)
project(projectName)

set(CMAKE_CXX_STANDARD 11)
# set(SOURCE_FILES main.cpp)

add_executable(projectName main.cpp)
#add_executable(Game ${SOURCE_FILES})


# Detect and add SFML
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
find_package(SFML 2 REQUIRED system window graphics network audio)
if(SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(${PROJECT_NAME} ${SFML_LIBRARIES})
endif()
```

> You will need to change "projectName" for the name of your project in the FindSFML.cmake file

Happy coding! 
