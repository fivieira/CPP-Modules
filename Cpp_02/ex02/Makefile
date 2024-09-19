# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fivieira <fivieira@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/19 15:28:54 by fivieira          #+#    #+#              #
#    Updated: 2024/09/19 15:30:21 by fivieira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Fixed.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)
	
clean:
	rm -f $(NAME)
	
fclean: clean

re: clean all

.PHONY: all clean fclean re
