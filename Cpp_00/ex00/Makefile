# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fivieira <fivieira@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/29 10:12:18 by fivieira          #+#    #+#              #
#    Updated: 2024/08/29 10:37:05 by fivieira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = megaphone
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = megaphone.cpp

all: $(Name)

$(Name): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(Name)

clean:
	rm -f $(Name)
	
fclean: clean

re: fclean all

.PHONY: all clean fclean re