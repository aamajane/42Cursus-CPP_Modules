/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:12:03 by aamajane          #+#    #+#             */
/*   Updated: 2022/11/23 21:08:29 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	if (ac != 4)
		std::cerr << "Error: Wrong number of arguments" << std::endl;
	else
	{
		std::string filename = av[1];
		std::string s1 = av[2];
		std::string s2 = av[3];
		std::ifstream file(filename);
		std::ofstream newFile(filename + "replace");
		std::string line;
		if(!file.is_open())
		{
			std::cerr << "Error: File could not be opened" << std::endl;
			return;
		}
		while (getline(file, line))
		{
			while ((int)line.find(s1) != -1)
			{
				line.erase(line.find(s1), s1.length());
				line.insert(line.find(s1), s2);
			}
			newFile << line << std::endl;
		}
	}
	return 0;
}
