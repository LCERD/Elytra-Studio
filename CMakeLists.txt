cmake_minimum_required(VERSION 4.0)
project(Elytra-Studio
        VERSION 0.1.0.0
        DESCRIPTION "A modernized cross-platform Legacy Console file editor."
        HOMEPAGE_URL "https://github.com/LCERD/Elytra-Studio/"
        LANGUAGES CXX
)

# ========== Configuration ==========

# Setting languages
enable_language(CXX)
set(CMAKE_CXX_STANDARD 23)

# Main project name
set(ES_TARGET_NAME Elytra-Studio)

# Directories used by the program
set(ES_SOURCE_DIR ${CMAKE_SOURCE_DIR}/src)

# ========== Source Files & Executable ==========

# Qt Framework
find_package(Qt6 REQUIRED COMPONENTS Core Widgets Gui Concurrent)
qt_standard_project_setup()

# Main app source
file(GLOB_RECURSE CPP_FILES ${ES_SOURCE_DIR}/*.cpp)
set(SRC ${CPP_FILES})

# Main app executable
qt_add_executable(${ES_TARGET_NAME} ${SRC})
target_link_libraries(${ES_TARGET_NAME} PRIVATE Qt6::Core Qt6::Gui Qt6::Widgets Qt6::Concurrent)
