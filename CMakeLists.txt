cmake_minimum_required(VERSION 3.10)
project(HelloWorldProject)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Получаем версию из аргументов CMake
if(DEFINED CMAKE_PROJECT_VERSION)
    set(PROJECT_VERSION ${CMAKE_PROJECT_VERSION})
else()
    set(PROJECT_VERSION "1.0.0")
endif()

message("Building version: ${PROJECT_VERSION}")

add_executable(hello_world main.cpp func.cpp)

# Передаем версию в код
target_compile_definitions(hello_world PRIVATE PROJECT_VERSION="${PROJECT_VERSION}")
target_include_directories(hello_world PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})