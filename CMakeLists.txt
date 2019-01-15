cmake_minimum_required (VERSION 2.8)
project (minilisp)

# Sources
add_subdirectory (src)

add_executable (minilispm, ${SOURCE})