cmake_minimum_required(VERSION 3.0)
project(versions LANGUAGES C)
add_library(${PROJECT_NAME} "")
target_sources(${PROJECT_NAME} PRIVATE board.c board.h)
target_link_libraries(${PROJECT_NAME} PRIVATE SDL2 SDL2main)

target_include_directories(${PROJECT_NAME} PRIVATE /usr/local/include/)
target_link_directories(${PROJECT_NAME} PRIVATE /usr/local/lib/)
target_include_directories(${PROJECT_NAME} PUBLIC $(CMAKE_CURRENT_SOURCE_DIR))
