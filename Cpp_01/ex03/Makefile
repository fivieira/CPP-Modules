# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fivieira <fivieira@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/30 10:46:01 by fivieira          #+#    #+#              #
#    Updated: 2024/08/30 10:48:26 by fivieira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = violence
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

all: $(Name)

$(Name): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(Name)

clean:
	rm -f $(Name)
	
fclean: clean

re: clean all

.PHONY: all clean fclean re