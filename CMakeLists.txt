cmake_minimum_required(VERSION 3.10)
project(MiniRTOS)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

add_executable(mini_rtos src/main.cpp src/task.cpp src/scheduler.cpp)
