#ifndef FIXED_HPP
# define FIXED_HPP

#include <string.h>
#include <iostream>

class Fixed
{
	private: 
		int Raw_bits;
		static const int frac_bits = 8;

	public:
		Fixed(void);
};

#endif