cmake_minimum_required(VERSION 3.16)

add_subdirectory("${PROJECT_SOURCE_DIR}/External/googletest" "External/googletest")

# Creates a gtest executable with 'TEST_NAME' for it's name.
macro(add_test TEST_NAME)

	# Create the executable and use the last arguments as source files.
	add_executable(${TEST_NAME} ${ARGN})

	# Link in the AMR and gtest libraries.
	target_link_libraries(${TEST_NAME}
		${PROJECT_NAME}
		gtest
		gmock
		gtest_main
	)

	gtest_discover_tests(${TEST_NAME}
        WORKING_DIRECTORY ${PROJECT_DIR}
        PROPERTIES VS_DEBUGGER_WORKING_DIRECTORY "${PROJECT_DIR}"
    )

	# Set the search for this test to start in the 'Tests' folder.
	set_target_properties(${TEST_NAME} PROPERTIES FOLDER Tests)

endmacro()

# Add tests.
# ----------

# Sets.
add_test(Element Sets/Element.test.cpp)
add_test(FiniteSet Sets/FiniteSet.test.cpp)
add_test(Range Sets/Range.test.cpp)
add_test(Set Sets/Set.test.cpp)
