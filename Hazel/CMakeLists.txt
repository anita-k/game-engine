cmake_minimum_required(VERSION 3.20)
project(Hazel)

set(CMAKE_CXX_STANDARD 20)

#set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS 1)

add_compile_definitions(HZ_PLATFORM_WINDOWS)
add_compile_definitions(HZ_BUILD_DLL)

add_library(${PROJECT_NAME} SHARED Application.cpp Log.cpp)
add_library(Hazel::Engine ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC vendor/spdlog/include)




