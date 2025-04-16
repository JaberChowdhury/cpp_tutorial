cmake_minimum_required(VERSION 3.10)
project(CppTutorials)

file(GLOB_RECURSE CPP_FILES CONFIGURE_DEPENDS "${CMAKE_SOURCE_DIR}/*/*.cpp")

function(sanitize_name input output)
    string(REGEX REPLACE "[^a-zA-Z0-9_]" "_" sanitized "${input}")
    set(${output} "${sanitized}" PARENT_SCOPE)
endfunction()

foreach(file_path ${CPP_FILES})
    get_filename_component(dir_name "${file_path}" DIRECTORY)
    get_filename_component(folder "${dir_name}" NAME)
    get_filename_component(filename "${file_path}" NAME_WE)

    set(raw_target_name "${folder}_${filename}")
    sanitize_name("${raw_target_name}" target_name)

    add_executable(${target_name} ${file_path})
    set_target_properties(${target_name} PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/${folder}"
    )
endforeach()
