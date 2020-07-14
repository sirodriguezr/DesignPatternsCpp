cmake_minimum_required(VERSION 3.10)

project(app VERSION 1.0.0)

STRING(TOLOWER ${PROJECT_NAME} EXECUTABLE_NAME)

#if(NOT PTHREAD_LIBRARY)
#	message(FATAL_ERROR pthread library not found”)
#endif()

add_subdirectory(library)

add_executable(${EXECUTABLE_NAME} main.cpp)

target_link_libraries(${EXECUTABLE_NAME} PRIVATE MyLib)
