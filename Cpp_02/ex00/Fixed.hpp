/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fivieira <fivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:11:46 by fivieira          #+#    #+#             */
/*   Updated: 2024/09/19 16:34:25 by fivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>

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

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif