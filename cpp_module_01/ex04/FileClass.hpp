/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileClass.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:12:06 by aamajane          #+#    #+#             */
/*   Updated: 2022/11/22 18:00:11 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILECLASS_HPP
#define FILECLASS_HPP

#include <iostream>
#include <fstream>

class FileClass
{
	private:
		std::string _filename;
		std::string _s1;
		std::string _s2;

	public:
		FileClass(std::string filename, std::string s1, std::string s2);
};

#endif
