/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fivieira <fivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:59:22 by fivieira          #+#    #+#             */
/*   Updated: 2024/08/29 16:04:26 by fivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//-------Getters----------------

std::string const Contact::getFirstName()
{
	return (this->_first_name);
}
std::string const Contact::getLastName()
{
	return (this->_last_name);
}
std::string const Contact::getNickname()
{
	return (this->_nickname);
}
std::string const Contact::getPhoneNumber()
{
	return (this->_phone_number);
}
std::string const Contact::getDarkestSecret()
{
	return (this->_darkest_secret);
}

//-------Setters----------------

void Contact::setContact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
	this->_first_name = first_name;
	this->_last_name = last_name;
	this->_nickname = nickname;
	this->_phone_number = phone_number;
	this->_darkest_secret = darkest_secret;
}

//-------Display----------------

void	Contact::displayContact()
{
	std::cout << "First Name: " << this->_first_name << std::endl;
	std::cout << "Last Name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone Number: " << this->_phone_number << std::endl;
	std::cout << "Darkest Secret: " << this->_darkest_secret << std::endl;
}