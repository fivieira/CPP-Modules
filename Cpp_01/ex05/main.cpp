/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fivieira <fivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:35:37 by fivieira          #+#    #+#             */
/*   Updated: 2024/08/31 12:54:28 by fivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void menu(void)
{
	std::cout << "Choose a level of complain:" << std::endl;
	std::cout << "debug" << std::endl;
	std::cout << "info" << std::endl;
	std::cout << "warning" << std::endl;
	std::cout << "error" << std::endl;
}

int main(void)
{
	std::string level;
	std::string input;

	while (1)
	{
		//system("clear");
		menu();
		std::cout << "\nEnter a level of complain: ";
		std::getline(std::cin, level);
		if (level == "debug" || level == "info" || level == "warning" || level == "error")
			{
				Harl harl;
				std::cout << "\n";
				harl.complain(level);
				std::cout << "\nDo you want to file another complaint? (Y/N):" << std::endl;
				std::getline(std::cin, input);
				std::cout << "\n";
				if (input == "N")
					{
						std::cout << "Goodbye!" << std::endl;
						break;
					}
			}
			else
				std::cout << "Invalid input. Please try again.\n" << std::endl;
	}
}