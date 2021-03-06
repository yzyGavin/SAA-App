cmake_minimum_required (VERSION 2.8.12)
IF(WIN32)
    set(CMAKE_PREFIX_PATH "C:\\Qt\\5.4\\mingw491_32\\")
ENDIF()

IF(APPLE)
    set(CMAKE_PREFIX_PATH "/usr/local/Cellar/qt5/5.5.1_2;/usr/local/Cellar/qt5/5.5.1;/usr/local/Cellar/qt5/5.6.0")
endif()


option(PROFILE "Turn on code-profile options" OFF)
option(BUILD_PROTOBUF_SOURCE "Build the protobuf library via source; else use finPackage" ON)
    # Tell CMake to run moc when necessary:
set(CMAKE_AUTOMOC ON)
# As moc files are generated in the binary dir, tell CMake
# to always look for includes there:

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH}} cmake)

IF(FALSE)

set(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} mlpack")
ENDIF()
#add Googletest

#Environment Setup,  add C++11, debugging symbols, all warnings
option(test "Build all tests." ON) # Makes boolean 'test' available.

# Turn on the ability to create folders to organize projects (.vcproj)
# It creates "CMakePredefinedTargets" folder by default and adds CMake
# defined projects like INSTALL.vcproj and ZERO_CHECK.vcproj
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# Command to output information to the console
# Useful for displaying errors, warnings, and debugging
SET(protobuf_BUILD_TESTS OFF)
set(protobuf_BUILD_SHARED_LIBS OFF)
set(protobuf_DEBUG_POSTFIX "")
project (SAA_Application)

add_subdirectory(lib/googletest)

if(BUILD_PROTOBUF_SOURCE)
    add_subdirectory(lib/protobuf/cmake)
    include_directories(${protobuf_SOURCE_DIR}/../src)
    link_directories(${protobuf_BINARY_DIR})
    link_directories(${CMAKE_RUNTIME_OUTPUT_DIRECTORY})
    link_directories(${/usr/lib/x86_64-linux-gnu/})
else()
    find_package(Protobuf REQUIRED)
    include_directories(${PROTOBUF_INCLUDE_DIRS})
    if(NOT ${PROTOBUF_FOUND})
        message(ERROR "FIND_PACKAGE didn't work, mate")
    endif()
endif()
message(WARNING "Proto is at: ${protobuf_SOURCE_DIR}")


include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
include_directories(${gmock_SOURCE_DIR}/include ${gmock_SOURCE_DIR})
include_directories(${CMAKE_SOURCE_DIR}/lib/mlpack/src)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -g -Wall -pthread -D__DIR__=\\\"${PROJECT_BINARY_DIR}\\\"")

if(PROFILE)
	SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage")
ENDIF()


SET(CMAKE_INSTALL_PREFIX "${PROJECT_BINARY_DIR}")



add_subdirectory(src)
add_subdirectory(app)
add_subdirectory(test)

#Copy resources to output dir
#TODO: THIS NO WORK...
file(GLOB_RECURSE RESOURCES
        "resources/*")
file(COPY ${RESOURCES} DESTINATION ${PROJECT_BINARY_DIR}/resources)
