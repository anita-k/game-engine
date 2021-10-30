cmake_minimum_required(VERSION 3.20)
project(Sandbox)

set(CMAKE_CXX_STANDARD 20)
add_compile_definitions(HZ_PLATFORM_WINDOWS)

add_executable(${PROJECT_NAME} SandboxApp.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ../Hazel/)

target_link_libraries(${PROJECT_NAME} Hazel::Engine)

