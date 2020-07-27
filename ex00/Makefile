CXX			= clang++
CPPFLAGS	= -Wall -Werror -Wextra

FILES	= megaphone.cpp
OBJS	:= $(FILES:.cpp=.o)

%.o : %.cpp
	@echo CXX $<
	@$(CXX) $(CPPFLAGS) -c -o $@ $<

megaphone: $(OBJS)
	@$(CXX) -o $@ $^

clean:
	$(RM) $(OBJS) megaphone