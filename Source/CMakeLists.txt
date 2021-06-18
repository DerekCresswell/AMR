cmake_minimum_required(VERSION 3.16)

set(LIB_SOURCE_FILES
	temp.cpp
)

target_sources(${PROJECT_NAME}
	PRIVATE
		${LIB_SOURCE_FILES}
)
