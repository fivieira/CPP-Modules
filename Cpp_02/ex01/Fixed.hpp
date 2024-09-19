/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fivieira <fivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:11:46 by fivieira          #+#    #+#             */
/*   Updated: 2024/09/19 16:35:47 by fivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class Fixed
{
	private: 
		int raw_bits;
		static const int frac_bits = 8;

	public:
		Fixed(void); //Defaut constructor
		Fixed(const Fixed &src); //Copy constructor
		Fixed &operator=(const Fixed &rhs); //Assignation operator overload
		~Fixed(void); //Destructor

		Fixed(const int n); //Int constructor
		Fixed(const float n); //Float constructor

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &src);

#endif