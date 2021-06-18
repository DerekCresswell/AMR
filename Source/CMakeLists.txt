cmake_minimum_required(VERSION 3.16)

set(LIB_SOURCE_FILES
	Expression/ExpressionNode.cpp
	Expression/ExpressionTree.cpp
)

target_sources(${PROJECT_NAME}
	PRIVATE
		${LIB_SOURCE_FILES}
)
