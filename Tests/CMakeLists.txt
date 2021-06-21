cmake_minimum_required(VERSION 3.16)

add_subdirectory("${PROJECT_SOURCE_DIR}/External/googletest" "External/googletest")
enable_testing()

SET(TEST_SOURCE_FILES
	Expression/CommonExpressionNodes.test.cpp
	Expression/ExpressionNode.test.cpp
	Expression/ExpressionTree.test.cpp
)

add_executable(amr_tests ${TEST_SOURCE_FILES})
target_link_libraries(amr_tests
	${PROJECT_NAME}
	gtest
	gmock
	gtest_main
)
