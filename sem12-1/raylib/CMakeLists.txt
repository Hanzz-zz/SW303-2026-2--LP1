cmake_minimum_required(VERSION 3.16)
project(LP1_Semana12 C)
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# Prefer the system library; if missing, automatically download raylib 5.5.
find_package(raylib QUIET)
if(NOT raylib_FOUND AND NOT TARGET raylib)
    include(FetchContent)
    set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
    set(BUILD_GAMES OFF CACHE BOOL "" FORCE)
    FetchContent_Declare(raylib
        GIT_REPOSITORY https://github.com/raysan5/raylib.git
        GIT_TAG 5.5
        GIT_SHALLOW TRUE)
    FetchContent_MakeAvailable(raylib)
endif()

foreach(name test_raylib graf_funciones gravedad reloj)
    add_executable(${name} cgraf/${name}.c)
    target_link_libraries(${name} PRIVATE raylib m)
endforeach()

file(GLOB CONSOLA_FILES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/ejer*.c")
foreach(file IN LISTS CONSOLA_FILES)
    get_filename_component(name "${file}" NAME_WE)
    if(NOT name MATCHES "^ejer(10|11|13)_")
        add_executable(${name} "${file}")
        target_link_libraries(${name} PRIVATE m)
    endif()
endforeach()

foreach(name demo_ejer10 demo_ejer11 demo_ejer13)
    add_executable(${name} linux/${name}.c)
    target_link_libraries(${name} PRIVATE m)
endforeach()
