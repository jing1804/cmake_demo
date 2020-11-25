cmake_minimum_required(VERSION 3.5)
project(hello_world)
add_executable(hello_world
				main.cpp
)
target_include_directories(hello_world
							PUBLIC
							${PROJECT_SOURCE_DIR}/third/model1
							${PROJECT_SOURCE_DIR}/third/model2
)
message("hi ${PROJECT_SOURCE_DIR}")
link_directories(${PROJECT_SOURCE_DIR})
target_link_libraries(hello_world
						PRIVATE
						hello_static_library
						hello_share_library
)
