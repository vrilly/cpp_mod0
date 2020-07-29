project(phonebook)
set(CMAKE_CXX_COMPILER "clang++")
set(CMAKE_CXX_FLAGS "-Wall -Wextra -std=c++03")
add_executable(phonebook phonebook.cpp phonebook.hpp ContactStorage.cpp ContactStorage.hpp)
