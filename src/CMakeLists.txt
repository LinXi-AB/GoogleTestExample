# ¼Ó¼õº¯Êý¿â
add_library(math STATIC add.cpp sub.cpp)

# main³ÌÐò
add_executable(main main.cpp)
target_link_libraries(main math)