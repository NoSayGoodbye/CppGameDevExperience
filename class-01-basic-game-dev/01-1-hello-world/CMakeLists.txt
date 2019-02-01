cmake_minimum_required(VERSION 3.10)

project(01-1-hello-world)

add_executable(${PROJECT_NAME} hello.cxx)
target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)

if(MSVC)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4 /WX /std:c++17")
else()
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic -Werror")
endif()
