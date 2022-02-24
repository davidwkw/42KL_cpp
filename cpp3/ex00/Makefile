# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/24 14:07:02 by kwang             #+#    #+#              #
#    Updated: 2022/02/24 14:07:03 by kwang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

SRCS = main.cpp \
	   ClapTrap.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = claptrap

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
