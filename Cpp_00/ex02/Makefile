# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fivieira <fivieira@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/29 17:53:23 by fivieira          #+#    #+#              #
#    Updated: 2024/08/29 17:57:48 by fivieira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = account
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Account.cpp tests.cpp

all: $(Name)

$(Name): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(Name)

clean:
	rm -f $(Name)

fclean: clean

re: fclean all

.PHONY: all clean fclean re