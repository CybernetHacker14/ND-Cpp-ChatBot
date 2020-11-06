cmake_minimum_required(VERSION 3.11.3)

set(CMAKE_CXX_STANDARD 17)

project(Membot)

SET(wxWidgets_ROOT_DIR "${PROJECT_SOURCE_DIR}/thirdparty/wxwidgets/")
SET(wxWidgets_LIB_DIR "${PROJECT_SOURCE_DIR}/thirdparty/wxwidgets/lib/vc14x_x64_dll")
SET(wxWidgets_CONFIGURATION "mswd")

find_package(wxWidgets COMPONENTS core base REQUIRED)
include(${wxWidgets_USE_FILE})

file(GLOB project_SRCS src/*.cpp)

add_executable(membot WIN32 ${project_SRCS})
target_link_libraries(membot ${wxWidgets_LIBRARIES})
target_include_directories(membot PRIVATE ${wxWidgets_INCLUDE_DIRS})