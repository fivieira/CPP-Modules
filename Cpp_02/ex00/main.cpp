/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fivieira <fivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:27:26 by fivieira          #+#    #+#             */
/*   Updated: 2024/09/19 15:31:50 by fivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
	std::cout << "\n----------- First test -----------\n\n";
	{
		// This is the simple one -> Constructor and Destructor only
		Fixed a;

		// Copy constructor and assignment operator are called
		Fixed b(a);
		
		// Copy assignment operator is called
		Fixed c;
		c = b;

		std::cout << a.getRawBits() << std::endl;
		std::cout << b.getRawBits() << std::endl;
		std::cout << c.getRawBits() << std::endl;
	}
	std::cout << "\n----------- Second test -----------\n\n";
	{
		Fixed a;
		Fixed b(a);
		Fixed c;
		c = a;
		
		a.setRawBits(42);
		std::cout << a.getRawBits() << std::endl;
		std::cout << b.getRawBits() << std::endl;
		std::cout << c.getRawBits() << std::endl;
	}
	std::cout << "\n----------- Third test -----------\n\n";
	{
		Fixed a;
		a.setRawBits(42);
	
		Fixed b(a);
		Fixed c = a;

		std::cout << a.getRawBits() << std::endl;
		std::cout << b.getRawBits() << std::endl;
		std::cout << c.getRawBits() << std::endl;
	}
}