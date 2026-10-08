cmake_minimum_required(VERSION 3.20)
project(TurboFPS LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(TurboFPS src/main.cpp)

if(MSVC)
    target_compile_options(TurboFPS PRIVATE /W4 /EHsc /utf-8)
    target_compile_definitions(TurboFPS PRIVATE UNICODE _UNICODE)
endif()
