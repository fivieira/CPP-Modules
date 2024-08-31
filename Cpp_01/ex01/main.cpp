/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fivieira <fivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:14:40 by fivieira          #+#    #+#             */
/*   Updated: 2024/08/29 19:15:08 by fivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombies = zombieHorde(6, "Zombie");
	for (int i = 0; i < 6; i++)
		zombies[i].announce();
	delete [] zombies;
	return (0);
}