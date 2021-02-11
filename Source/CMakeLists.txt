cmake_minimum_required(VERSION 3.16)

set(SOURCE_FILES
	temp.cpp
)

target_sources(${PROJECT_NAME}
	PRIVATE
		${SOURCE_FILES}
)
