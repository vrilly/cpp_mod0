CXX			= clang++
CPPFLAGS	= -Wall -Werror -Wextra

FILES	= ContactStorage.cpp Phonebook.cpp
OBJS	:= $(FILES:.cpp=.o)

%.o : %.cpp
	@echo CXX $<
	@$(CXX) $(CPPFLAGS) -c -o $@ $<

phonebook: $(OBJS)
	@$(CXX) -o $@ $^

clean:
	$(RM) $(OBJS) phonebook