/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fivieira <fivieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 11:12:47 by fivieira          #+#    #+#             */
/*   Updated: 2024/08/31 12:19:31 by fivieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>


int	check_args(int ac, char *av[]);
std::string	replace(std::string line, std::string s1, std::string s2);

int main(int ac, char *av[])
{
	check_args(ac, av);
	std::string s1 = av[2];
	std::string s2 = av[3];
	
	std::ifstream old_file(av[1]);
	if (!old_file.is_open())
	{
		std::cout << "Error\nFile not found" << std::endl;
		return (1);
	}
	std::ofstream new_file((av[1] + std::string(".replace")).c_str());
	if (!new_file.is_open())
	{
		std::cout << "Error\nFile not created" << std::endl;
		return (1);
	}
	if(s1 == s2)
		new_file << old_file.rdbuf();
	else
	{
		std::string line;
		while (std::getline(old_file, line))
			new_file << replace(line, s1, s2) << std::endl;
	}
	old_file.close();
	new_file.close();
}


int check_args(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cout << "Error\nUsage: ./replace [filename] [str_to_replace] [str_to_insert]" << std::endl;
		exit (1);
	}
	std::string s1 = av[2];
	std::string s2 = av[3];
	if(s1.empty() || s2.empty())
	{
		std::cout << "Error\nEmpty strings are not allowed" << std::endl;
		exit (1);
	}
	return (0);
}

std::string replace(std::string line, std::string s1, std::string s2)
{
	size_t pos = 0;
	while ((pos = line.find(s1, pos)) != std::string::npos)
	{
		line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
		pos += s2.length();
	}
	return (line);
}