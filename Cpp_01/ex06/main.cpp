/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fivieira <fivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:57:48 by fivieira          #+#    #+#             */
/*   Updated: 2024/08/31 13:03:35 by fivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char *av[])
{
	if(ac != 2)
	{
		std::cout << "Usage: ./harlFilter [d/i/w/e]" << std::endl;
		return (1);
	}
	Harl harl;
	harl.complain(av[1]);
}