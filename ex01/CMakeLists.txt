project(phonebook)
set(CMAKE_CXX_COMPILER "clang++")
set(CMAKE_CXX_FLAGS "-Wall -Wextra -std=c++03")
add_executable(phonebook Phonebook.cpp Phonebook.hpp ContactStorage.cpp ContactStorage.hpp)
