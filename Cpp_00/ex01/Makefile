# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fivieira <fivieira@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/29 17:20:57 by fivieira          #+#    #+#              #
#    Updated: 2024/08/29 17:22:35 by fivieira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = phonebook
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Phonebook.cpp Contact.cpp main.cpp

all: $(Name)

$(Name): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(Name)

clean:
	rm -f $(Name)
	
fclean: clean

re: fclean all

.PHONY: all clean fclean re