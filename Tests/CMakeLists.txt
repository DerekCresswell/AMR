cmake_minimum_required(VERSION 3.16)

add_subdirectory("${PROJECT_SOURCE_DIR}/External/googletest" "External/googletest")
enable_testing()

# Creates a gtest executable with 'TEST_NAME' for it's name.
macro(add_test_l TEST_NAME)

	# Create the executable and use the last arguments as source files.
	add_executable(${TEST_NAME} ${ARGN})

	# Link in the AMR and gtest libraries.
	target_link_libraries(${TEST_NAME}
		${PROJECT_NAME}
		gtest
		gmock
		gtest_main
	)

	# Add the test to gtest.
	add_test(
		NAME ${TEST_NAME}
		COMMAND ${TEST_NAME}
	)

	list(APPEND TEST_SOURCE_FILES ${ARGN})

endmacro()

# Add tests.
# ----------

# Sets.
add_test_l(Element Sets/Element.test.cpp)
add_test_l(FiniteSet Sets/FiniteSet.test.cpp)
#add_test(Range Sets/Range.test.cpp)
#add_test(Set Sets/Set.test.cpp)

# Finally, create a single executable to run all the tests at once.
add_executable(all_tests ${TEST_SOURCE_FILES})
target_link_libraries(all_tests
	${PROJECT_NAME}
	gtest
	gmock
	gtest_main
)
