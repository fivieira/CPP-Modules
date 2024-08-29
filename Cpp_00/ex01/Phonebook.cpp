/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fivieira <fivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:17:55 by fivieira          #+#    #+#             */
/*   Updated: 2024/08/29 17:18:39 by fivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

//constructor and distructor

Phonebook::Phonebook()
{
	this->_nb_contacts = 0;
}
Phonebook::~Phonebook()
{
}

//add contact

void Phonebook::addContact()
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	if(check_nb_contacts(this->_nb_contacts))
		return ;
	std::cout << "Enter first name: ";
	std::getline(std::cin, first_name);
	std::cout << "Enter last name: ";
	std::getline(std::cin, last_name);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, phone_number);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, darkest_secret);
	if(first_name.empty() || last_name.empty() || nickname.empty() || phone_number.empty() || darkest_secret.empty())
	{
		std::cout << "Error: All fields are mandatory." << std::endl;
		return ;
	}
	this->_contacts[this->_nb_contacts].setContact(first_name, last_name, nickname, phone_number, darkest_secret);
	this->_nb_contacts++;
	std::cout << "Contact added." << std::endl;
}
void	Phonebook::searchContact()
{
	std::string index_str;
	
	if(this->_nb_contacts == 0)
	{
		std::cout << "Phonebook is empty." << std::endl;
		return ;
	}
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	for(int i = 0; i < this->_nb_contacts && i < 8; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << truncate(this->_contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << truncate(this->_contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << truncate(this->_contacts[i].getNickname()) << std::endl;
	}
	std::cout << "Enter index of the contact: ";
	std::cin >> index_str;
	while (index_str.length() > 1 || index_str[0] < '0' || index_str[0] > '8')
	{
		std::cout << "Invalid index." << std::endl;
		std::cout << "Enter index of the contact: ";
		std::cin >> index_str;
	}
	_contacts[index_str[0] - '0' - 1].displayContact();
	std::cin.ignore();

}



// helper functions

int check_nb_contacts(int nb_contacts)
{
	std::string answer;
	if(nb_contacts >= 8)
	{
		std::cout << "Phonebook is full." << std::endl;
		std::cout << "It will replace the oldest contact." << std::endl;
		std::cout << "Do you want to continue? (y/n)" << std::endl;
		std::getline(std::cin, answer);
		if(answer == "y")
			return (0);
		else if (answer == "n")
			return (1);
		else
		{
			std::cout << "Invalid input." << std::endl;
			return (1);
		}	
	}
	return (0);
}

std::string truncate(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(9);
		str += ".";
	}
	return (str);
}