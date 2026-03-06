#set(target ${MP2_LIBRARY})
#
#file(GLOB hdrs "*.h*" "${MP2_INCLUDE}/*.h*")
#file(GLOB srcs "*.cpp")
#
#add_library(${target} STATIC ${srcs} ${hdrs})
#target_link_libraries(${target} ${LIBRARY_DEPS})
set(CMAKE_CXX_STANDARD 17)

add_library(${PROJECT_NAME} STATIC "monom.cpp" "polynom.cpp")

# Добавляем пути к заголовочным файлам
target_include_directories(${PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../include
)

# Добавляем пути к ANTLR и сгенерированным файлам парсера
target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/../antlr4-cpp-runtime-4.13.2-source/runtime/src
    ${CMAKE_CURRENT_SOURCE_DIR}/../parser
)

# Линкуем с ANTLR библиотекой
target_link_libraries(${PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/../antlr_sln/runtime/Debug/antlr4-runtime.lib
)

#add_library(${PROJECT_NAME} STATIC "monom.cpp" "polynom.cpp")
