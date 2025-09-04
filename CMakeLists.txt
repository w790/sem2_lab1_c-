cmake_minimum_required(VERSION 3.10)#минимальная версия cmake
project(HelloWorldProject VERSION 1.0.0)#задаем имя проекта и его версию
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(hello_world main.cpp func.cpp)#cоздаем исполняемый файл с именем  из исходных кодов
target_compile_definitions(hello_world PRIVATE PROJECT_VERSION="${PROJECT_VERSION}")#передаем версию проекта в код
target_include_directories(hello_world PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})#указываем, где искать заголовочные файлы