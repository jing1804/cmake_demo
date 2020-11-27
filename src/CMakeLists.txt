cmake_minimum_required(VERSION 3.5)
project(hello_world)
add_subdirectory(${CMAKE_BINARY_DIR}/../third_src_lib1/model1)
add_subdirectory(${PROJECT_SOURCE_DIR}/third_src_lib1/model2)
add_executable(hello_world
				main.cpp
				${PROJECT_SOURCE_DIR}/hello/hello_world.cpp
)
target_include_directories(hello_world
							PUBLIC
							${PROJECT_SOURCE_DIR}/hello
							${PROJECT_SOURCE_DIR}/third_src_lib1/model1
							${PROJECT_SOURCE_DIR}/third_src_lib1/model2
							${PROJECT_SOURCE_DIR}/../third_lib/include/
)
message("hi ${CMAKE_BINARY_DIR}")
find_library(HELLO_THIRD_STATIC_LIB hello_third_static_lib HINTS ${PROJECT_SOURCE_DIR}/../third_lib/lib)
find_library(HELLO_THIRD_SHARE_LIB hello_third_share_lib HINTS ${PROJECT_SOURCE_DIR}/../third_lib/lib)
target_link_libraries(hello_world
						PUBLIC	
						hello_third_src_static_lib
						hello_third_src_share_lib
						${HELLO_THIRD_STATIC_LIB}
						${HELLO_THIRD_SHARE_LIB}						
)
