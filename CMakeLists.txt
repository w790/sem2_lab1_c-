cmake_minimum_required(VERSION 3.10)#минимальная версия cmake
project(HelloWorldProject)#задаем имя проекта
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
if(NOT DEFINED PROJECT_VERSION)
    set(PROJECT_VERSION "1.0.0")
endif()
message("Building version: ${PROJECT_VERSION}") # Для отладки
add_executable(hello_world main.cpp func.cpp)#cоздаем исполняемый файл с именем  из исходных кодов
target_compile_definitions(hello_world PRIVATE PROJECT_VERSION="\"${PROJECT_VERSION}\"")
target_include_directories(hello_world PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})#указываем, где искать заголовочные файлы
