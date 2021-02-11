cmake_minimum_required(VERSION 3.16)

project(AMR VERSION 0.0.0 LANGUAGES CXX)

# Options.
# --------
option(AMR_BUILD_TESTS "Builds the AMR unit tests." ON)
option(AMR_BUILD_EXAMPLES "Builds AMR example programs." ON)

# Directory Mappings.
# -------------------
set(EXAMPLES_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Examples)
set(EXTERNAL_DIR ${CMAKE_CURRENT_SOURCE_DIR}/External)
set(INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Include)
set(SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Source)
set(TESTS_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Tests)

# Set up AMR library.
# -------------------

# Require the C++17 standard.
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(${PROJECT_NAME} "")

configure_file(${SOURCE_DIR}/${PROJECT_NAME}Configure.hpp.in ${PROJECT_NAME}Configure.hpp)

target_include_directories(${PROJECT_NAME}
	PUBLIC
		${INCLUDE_DIR}
	PRIVATE
		${PROJECT_BINARY_DIR}
)

add_subdirectory(${SOURCE_DIR})

# Set up options.
# ---------------
if(AMR_BUILD_TESTS)

	message(STATUS "Building AMR unit tests.")

	enable_testing()
	include(GoogleTest)

	add_subdirectory(${TESTS_DIR})

endif()

if(AMR_BUILD_EXAMPLES)

	message(STATUS "Building AMR examples.")
	add_subdirectory(${EXAMPLES_DIR})

endif()
