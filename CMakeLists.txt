cmake_minimum_required (VERSION 2.8)
project (minilisp)

# Dependencies

# boost
list(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)
set(BOOST_REQUESTED_VERSION 1.61)
find_package(Boost COMPONENTS system program_options)

# Sources
add_subdirectory (src)

add_executable (minilispm, ${SOURCE})