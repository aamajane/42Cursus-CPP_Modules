/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:12:03 by aamajane          #+#    #+#             */
/*   Updated: 2022/11/26 20:41:11 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string filename = av[1];
		std::string s1 = av[2];
		std::string s2 = av[3];
		std::ifstream file(filename);
		if(file.is_open())
		{
			std::ofstream newFile(filename + ".replace");
			std::string line;
			while (std::getline(file, line))
			{
				if (s1.length() && s1 != s2)
				{
					size_t pos = 0;
					while((pos = line.find(s1, pos)) != std::string::npos)
					{
						line.erase(pos, s1.length());
						line.insert(pos, s2);
						pos += s2.length();
					}
				}
				newFile << line << std::endl;
			}
			file.close();
			newFile.close();
		}
		else
			std::cerr << "Error: File could not be opened" << std::endl;
	}
	else
		std::cerr << "Error: Wrong number of arguments" << std::endl;
	return 0;
}
