CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

SRCS = main.cpp \

OBJS = $(SRCS:.cpp=.o)

NAME = replacement

all : $(NAME);

$(NAME) : $(OBJS)
	@echo "Creating $(NAME)"
	@$(CXX) $(CFLAGS) -o $@ $^

clean :
	@rm -rf $(OBJS)

fclean : clean
	@rm -rf $(NAME)

re : clean all

.PHONY : all clean fclean re
