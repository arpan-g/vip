cmake_minimum_required(VERSION 2.8.8)
set(PROJECT_NAME_STR yata)

project(${PROJECT_NAME_STR} C CXX)

find_package(Threads REQUIRED)



add_definitions(-Wall -ansi -Wno-deprecated -pthread)

set(COMMON_INCLUDES ${PROJECT_SOURCE_DIR}/include)
set(EXT_PROJECTS_DIR ${PROJECT_SOURCE_DIR}/ext)
add_subdirectory(${EXT_PROJECTS_DIR}/gtest)
enable_testing()

set(PROJECT_TEST_NAME ${PROJECT_NAME_STR}_test)
include_directories(${GTEST_INCLUDE_DIRS} ${COMMON_INCLUDES} ${GMOCK_INCLUDE_DIRS})


set(PROJECT_LIB_NAME ${PROJECT_NAME_STR}_impl)
file(GLOB TEST_SRC_FILES ${PROJECT_SOURCE_DIR}/test/*.cpp)
add_executable(${PROJECT_TEST_NAME} ${TEST_SRC_FILES})
add_dependencies(${PROJECT_TEST_NAME} googletest)

file(GLOB SRC_FILES ${PROJECT_SOURCE_DIR}/src/*.cpp)
add_library(${PROJECT_LIB_NAME} ${SRC_FILES})

target_link_libraries(${PROJECT_TEST_NAME} ${GMOCK_LIBS_DIR}/libgmock.a ${GTEST_LIBS_DIR}/libgmock_main.a)

target_link_libraries(${PROJECT_TEST_NAME} ${GTEST_LIBS_DIR}/libgtest.a ${GTEST_LIBS_DIR}/libgtest_main.a)
target_link_libraries(${PROJECT_TEST_NAME} ${CMAKE_THREAD_LIBS_INIT} ${PROJECT_LIB_NAME})

add_test(test1 ${PROJECT_TEST_NAME})

