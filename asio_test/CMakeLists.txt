cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(PROJECT_NAME "asio_test")
set(CMAKE_CXX_FLAGS "-g")# 断点无效处理方案
project(${PROJECT_NAME})

# 目录获取
get_filename_component(sheTestcode_path ${CMAKE_SOURCE_DIR} DIRECTORY)
message(STATUS "sheTestcode_path's path:${sheTestcode_path}")
get_filename_component(sheTestcode_path_father ${sheTestcode_path} DIRECTORY)
message(STATUS "sheTestcode_path_father's path:${sheTestcode_path_father}")

# set libraries
set(asio "${sheTestcode_path_father}/libraries/asio")

# include
include_directories(${asio}/include)
# lib
link_directories()

file(GLOB_RECURSE SRC "${CMAKE_SOURCE_DIR}/main.cpp")
add_executable(${PROJECT_NAME} ${SRC})

# 链接库
target_link_libraries(${PROJECT_NAME} "-pthread")