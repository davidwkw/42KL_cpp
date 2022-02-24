# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/24 14:08:20 by kwang             #+#    #+#              #
#    Updated: 2022/02/24 14:08:21 by kwang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

SRCS = main.cpp \
	   Karen.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = karen

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
