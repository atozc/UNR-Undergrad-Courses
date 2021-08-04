cmake_minimum_required(VERSION 2.8.9) 

project(proj10) 

include_directories(include/MyModule) 

add_library(MyModule ${MYMODULE_SOURCES})

add_executable(proj10 src/proj10.cpp)

target_link_libraries(proj10 MyModule)

install(TARGETS proj10 MyModule
	RUNTIME DESTINATION ${PROJECT_SOURCE_DIR}/devel/bin
	LIBRARY DESTINATION ${PROJECT_SOURCE_DIR}/devel/lib
	ARCHIVE DESTINATION ${PROJECT_SOURCE_DIR}/devel/lib/static)

install(DIRECTORY ${PROJECT_SOURCE_DIR}/include/
	DESTINATION ${PROJECT_SOURCE_DIR}/devel/include
	FILES_MATCHING PATTERN "*.h" PATTERN "*.hpp")