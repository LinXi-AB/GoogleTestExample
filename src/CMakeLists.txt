# �Ӽ�������
add_library(math STATIC add.cpp sub.cpp)

# main����
add_executable(main main.cpp)
target_link_libraries(main math)