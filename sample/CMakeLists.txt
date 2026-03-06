#
#file(GLOB samples_list RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp)
#
#
#foreach(sample_filename ${samples_list})
#  get_filename_component(sample ${sample_filename} NAME_WE)
#
#  add_executable(${sample} ${sample_filename})
#  target_link_libraries(${sample} ${MP2_LIBRARY})
#  set_target_properties(${sample} PROPERTIES
#    OUTPUT_NAME "${sample}"
#    PROJECT_LABEL "${sample}"
#    RUNTIME_OUTPUT_DIRECTORY "../")
#endforeach()

##set_target_properties(main PROPERTIES
##  RUNTIME_OUTPUT_DIRECTORY "../")
#foreach(sample_filename ${samples_list})
#	get_filename_component(sample ${sample_filename} NAME_WE)
#	add_executable(${sample} ${sample_filename})
#	target_link_libraries(${sample} ${PROJECT_NAME})
#endforeach()

## Собираем main с файлами парсера
#file(GLOB PARSER_SRC "${CMAKE_CURRENT_SOURCE_DIR}/../parser/*.cpp")
#add_executable(main main.cpp ${PARSER_SRC})
#
## Линкуем с ANTLR
#target_link_libraries(main PRIVATE
#    ${CMAKE_CURRENT_SOURCE_DIR}/../antlr_sln/runtime/Debug/antlr4-runtime.lib
#)
#
## Добавляем пути для include
#target_include_directories(main PRIVATE
#    ${CMAKE_CURRENT_SOURCE_DIR}/../include
#    ${CMAKE_CURRENT_SOURCE_DIR}/../antlr4-cpp-runtime-4.13.2-source/runtime/src
#    ${CMAKE_CURRENT_SOURCE_DIR}/../parser
#)


# Добавляем файлы парсера в исполняемый файл
file(GLOB PARSER_SRC "${CMAKE_CURRENT_SOURCE_DIR}/../parser/*.cpp")

add_executable(main main.cpp ${PARSER_SRC})

# Линкуем с библиотекой arithmetic и ANTLR
target_link_libraries(main PRIVATE
    arithmetic
    ${CMAKE_CURRENT_SOURCE_DIR}/../antlr_sln/runtime/Debug/antlr4-runtime.lib
)

# Добавляем пути для include
target_include_directories(main PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/../include
    ${CMAKE_CURRENT_SOURCE_DIR}/../antlr4-cpp-runtime-4.13.2-source/runtime/src
    ${CMAKE_CURRENT_SOURCE_DIR}/../parser
)

# Копируем DLL
add_custom_command(TARGET main POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "${CMAKE_CURRENT_SOURCE_DIR}/../antlr_sln/runtime/Debug/antlr4-runtime.dll"
        $<TARGET_FILE_DIR:main>
)