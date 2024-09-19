/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fivieira <fivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:11:38 by fivieira          #+#    #+#             */
/*   Updated: 2024/09/19 16:03:57 by fivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : raw_bits(0)
{
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}
Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignation operator called" << std::endl;
	this->raw_bits = src.getRawBits();
	return (*this);
}
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

//-------------------------------------
int		Fixed::getRawBits(void) const
{
	return (this->raw_bits);
}

void	Fixed::setRawBits(int const raw)
{
	this->raw_bits = raw;
}
//--------------------------------

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->raw_bits = n << Fixed::frac_bits;
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	this->raw_bits = roundf(n * (1 << Fixed::frac_bits));
}

float	Fixed::toFloat(void) const
{
	return ((float)this->raw_bits / (1 << Fixed::frac_bits));
}

int		Fixed::toInt(void) const
{
	return (this->raw_bits >> Fixed::frac_bits);
}

//----------Operator----------

std::ostream &operator<<(std::ostream &out, const Fixed &src)
{
	out << src.toFloat();
	return (out);
}