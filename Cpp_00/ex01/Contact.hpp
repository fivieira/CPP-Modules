/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fivieira <fivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:20:59 by fivieira          #+#    #+#             */
/*   Updated: 2024/08/29 15:58:57 by fivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

#ifndef CONTACT_HPP
# define CONTACT_HPP



class Contact
{
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string _phone_number;
	std::string _darkest_secret;
public:
	std::string const getFirstName();
	std::string const getLastName();
	std::string const getNickname();
	std::string const getPhoneNumber();
	std::string const getDarkestSecret();
	
	void setContact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
	void displayContact();
	
};

#endif
