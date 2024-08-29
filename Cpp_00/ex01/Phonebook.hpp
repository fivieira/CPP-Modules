/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fivieira <fivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:06:25 by fivieira          #+#    #+#             */
/*   Updated: 2024/08/29 17:18:28 by fivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "header.hpp"

class Phonebook
{
private:
	Contact _contacts[8];
	int _nb_contacts;

public:
	Phonebook();
	~Phonebook();
	void addContact();
	void searchContact();
};	

int check_nb_contacts(int nb_contacts);
std::string truncate(std::string str);

#endif