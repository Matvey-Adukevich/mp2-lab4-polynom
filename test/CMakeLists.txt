#set(target ${MP2_TESTS})
#
#file(GLOB hdrs "*.h*")
#file(GLOB srcs "*.cpp")
#
##include_directories("${CMAKE_CURRENT_SOURCE_DIR}/../3rdparty")
#
#add_executable(${target} ${srcs} ${hdrs})
##target_link_libraries(${target} gtest ${MP2_LIBRARY})
#
##add_executable(${MP2_TESTS} test_main.cpp)
##target_link_libraries(${MP2_TESTS} ${PROJECT_NAME} gtest)
#target_include_directories(${target} PRIVATE
#    ${CMAKE_CURRENT_SOURCE_DIR}/../googletest-main/googletest/include
#    ${CMAKE_CURRENT_SOURCE_DIR}/../googletest-main/googlemock/include
#	${CMAKE_CURRENT_SOURCE_DIR}/../include
#)
#target_link_libraries(${target} PRIVATE ${PROJECT_NAME} gtest)
set(target ${MP2_TESTS})

file(GLOB hdrs "*.h*")
file(GLOB srcs "*.cpp")
file(GLOB PARSER_SRC "${CMAKE_CURRENT_SOURCE_DIR}/../parser/*.cpp")

add_executable(${target} ${srcs} ${hdrs} ${PARSER_SRC})

target_include_directories(${target} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/../googletest-main/googletest/include
    ${CMAKE_CURRENT_SOURCE_DIR}/../googletest-main/googlemock/include
    ${CMAKE_CURRENT_SOURCE_DIR}/../include
    ${CMAKE_CURRENT_SOURCE_DIR}/../antlr4-cpp-runtime-4.13.2-source/runtime/src
    ${CMAKE_CURRENT_SOURCE_DIR}/../parser
)

target_link_libraries(${target} PRIVATE
    ${PROJECT_NAME}
    gtest
    ${CMAKE_CURRENT_SOURCE_DIR}/../antlr_sln/runtime/Debug/antlr4-runtime.lib
)
