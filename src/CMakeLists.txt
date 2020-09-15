cmake_minimum_required(VERSION 3.10)

# set the project name
project(NewTemplateProject VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_CXX_FLAGS_DEBUG_INIT "-Wall -O0")
set(CMAKE_CXX_FLAGS_RELEASE_INIT "-Wall -O3")

file(GLOB SOURCES *.cpp **/*.cpp panda_sdl/*.cpp panda_sdl/**/*.cpp panda_sdl/**/**/*.cpp lib_include/pugixml/*.cpp)

set( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/output )

# add the executable
add_executable(NewTemplateProject ${SOURCES})

target_precompile_headers(NewTemplateProject PRIVATE panda_sdl/src/pch.h)

target_include_directories(NewTemplateProject PUBLIC "/lib_include")
target_link_directories(NewTemplateProject PUBLIC "../lib")

target_link_libraries(NewTemplateProject mingw32)
target_link_libraries(NewTemplateProject SDL2main)
target_link_libraries(NewTemplateProject SDL2)
target_link_libraries(NewTemplateProject freeglut)
target_link_libraries(NewTemplateProject opengl32)
target_link_libraries(NewTemplateProject glew32)
target_link_libraries(NewTemplateProject freetype)

add_custom_command(TARGET NewTemplateProject PRE_BUILD
                   COMMAND ${CMAKE_COMMAND} -E copy_directory
                       ${CMAKE_CURRENT_BINARY_DIR}/../resources ${CMAKE_CURRENT_BINARY_DIR}/output)