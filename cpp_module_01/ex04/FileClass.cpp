/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileClass.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:12:08 by aamajane          #+#    #+#             */
/*   Updated: 2022/11/23 14:43:05 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileClass.hpp"

FileClass::FileClass(std::string filename, std::string s1, std::string s2)
	: _filename(filename), _s1(s1), _s2(s2)
{
	std::ifstream file(filename);
	std::ofstream newFile(filename + "replace");
	std::string line;
	if(!file.is_open())
	{
		std::cerr << "Error: File could not be opened" << std::endl;
		return;
	}
}
