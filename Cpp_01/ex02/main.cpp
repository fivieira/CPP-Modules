/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fivieira <fivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:45:00 by fivieira          #+#    #+#             */
/*   Updated: 2024/08/29 19:51:28 by fivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "Memory Address: (variable):  " << &str << std::endl;
	std::cout << "Memory Address: (pointer):   " << ptr << std::endl;
	std::cout << "Memory Address: (reference): " << &ref << std::endl;

	std::cout << std::endl;

	std::cout << "String: (variable):  " << str << std::endl;
	std::cout << "String: (pointer):   " << *ptr << std::endl;
	std::cout << "String: (reference): " << ref << std::endl;
}