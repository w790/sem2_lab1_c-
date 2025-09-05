cmake_minimum_required(VERSION 3.10)
project(HelloWorldProject)

# Получаем версию из аргументов
if(DEFINED PROJECT_VERSION)
    message("Using provided version: ${PROJECT_VERSION}")
else()
    set(PROJECT_VERSION "1.0.0")
    message("Using default version: ${PROJECT_VERSION}")
endif()

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(hello_world main.cpp func.cpp)

# Правильная передача версии
target_compile_definitions(hello_world PRIVATE PROJECT_VERSION="${PROJECT_VERSION}")

target_include_directories(hello_world PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})