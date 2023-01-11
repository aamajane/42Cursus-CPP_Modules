/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:05:45 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/12 00:03:36 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <limits>

#define CHAR		0
#define INT			1
#define FLOAT		2
#define DOUBLE		3
#define IMPOSSIBLE	4

bool	isChar(std::string s)
{
	if (s.length() == 3 && s.at(0) == '\'' && s.at(2) == '\'')
		return true;
	return false;
}

bool	isInt(std::string s)
{
	if (s.at(0) == '-' || s.at(0) == '+')
		s = s.substr(1);
	for (size_t i = 0; i < s.length(); i++)
	{
		if (s.at(i) < '0' || s.at(i) > '9')
			return false;
	}
	return true;
}

bool	isFloat(std::string s)
{
	int	dot = 0;

	if (s == "-inff" || s == "+inff" || s == "nanf")
		return true;
	if (s.at(0) == '-' || s.at(0) == '+')
		s = s.substr(1);
	for (size_t i = 0; i < s.length() - 1; i++)
	{
		if (s.at(i) == '.')
			dot++;
		else if (s.at(i) < '0' || s.at(i) > '9')
			return false;
	}
	if (dot == 1 && (s.at(s.length() - 1) == 'f' || s.at(s.length() - 1) == 'F'))
		return true;
	return false;
}

bool	isDouble(std::string s)
{
	int	dot = 0;

	if (s == "-inf" || s == "+inf" || s == "nan")
		return true;
	if (s.at(0) == '-' || s.at(0) == '+')
		s = s.substr(1);
	for (size_t i = 0; i < s.length(); i++)
	{
		if (s.at(i) == '.')
			dot++;
		else if (s.at(i) < '0' || s.at(i) > '9')
			return false;
	}
	if (dot == 1)
		return true;
	return false;
}

int	detectType(std::string s)
{
	if (isChar(s))
		return CHAR;
	else if (isInt(s))
		return INT;
	else if (isFloat(s))
		return FLOAT;
	else if (isDouble(s))
		return DOUBLE;
	else
		return IMPOSSIBLE;
}

// void	convertFromChar(std::string s)
// {
// 	char	c = s.at(1);

// 	std::cout << "char   : '" << c << "'" << std::endl;
// 	std::cout << "int    : " << static_cast<int>(c) << std::endl;
// 	std::cout << "float  : " << static_cast<float>(c) << ".0f" << std::endl;
// 	std::cout << "double : " << static_cast<double>(c) << ".0" << std::endl;
// }

// void	convertFromInt(std::string s)
// {
// 	int	n = std::stoi(s);

// 	if (n < std::numeric_limits<char>::min() || n > std::numeric_limits<char>::max())
// 		std::cout << "char   : impossible" << std::endl;
// 	else if (std::isprint(n))
// 		std::cout << "char   : '" << static_cast<char>(n) << "'" << std::endl;
// 	else
// 		std::cout << "char   : Non displayable" << std::endl;
// 	std::cout << "int    : " << static_cast<int>(n) << std::endl;
// 	std::cout << "float  : " << static_cast<float>(n) << ".0f" << std::endl;
// 	std::cout << "double : " << static_cast<double>(n) << ".0" << std::endl;
// }

// void	convertFromFloat(std::string s)
// {
// 	float	n = std::stof(s);

// 	if (n < std::numeric_limits<char>::min() || n > std::numeric_limits<char>::max())
// 		std::cout << "char   : impossible" << std::endl;
// 	else if (std::isprint(static_cast<int>(n)))
// 		std::cout << "char   : '" << static_cast<char>(n) << "'" << std::endl;
// 	else
// 		std::cout << "char   : Non displayable" << std::endl;
// 	if (n < std::numeric_limits<int>::min() || n > std::numeric_limits<int>::max())
// 		std::cout << "int    : impossible" << std::endl;
// 	else
// 		std::cout << "int    : " << static_cast<int>(n) << std::endl;
// 	std::cout << "float  : " << static_cast<float>(n) << "f" << std::endl;
// 	std::cout << "double : " << static_cast<double>(n) << std::endl;
// }

// void	convertFromDouble(std::string s)
// {
// 	double	n = std::stod(s);

// 	if (n < std::numeric_limits<char>::min() || n > std::numeric_limits<char>::max())
// 		std::cout << "char   : impossible" << std::endl;
// 	else if (std::isprint(static_cast<int>(n)))
// 		std::cout << "char   : '" << static_cast<char>(n) << "'" << std::endl;
// 	else
// 		std::cout << "char   : Non displayable" << std::endl;
// 	if (n < std::numeric_limits<int>::min() || n > std::numeric_limits<int>::max())
// 		std::cout << "int    : impossible" << std::endl;
// 	else
// 		std::cout << "int    : " << static_cast<int>(n) << std::endl;
// 	if (n < std::numeric_limits<float>::min() || n > std::numeric_limits<float>::max())
// 		std::cout << "float  : impossible" << std::endl;
// 	else
// 		std::cout << "float  : " << static_cast<float>(n) << "f" << std::endl;
// 	std::cout << "double : " << n << std::endl;
// }

void	convert(std::string s)
{
	double	n = std::stod(s);

	if (n < std::numeric_limits<char>::min() || n > std::numeric_limits<char>::max())
		std::cout << "char   : impossible" << std::endl;
	else if (std::isprint(static_cast<int>(n)))
		std::cout << "char   : '" << static_cast<char>(n) << "'" << std::endl;
	else
		std::cout << "char   : Non displayable" << std::endl;
	if (n < std::numeric_limits<int>::min() || n > std::numeric_limits<int>::max())
		std::cout << "int    : impossible" << std::endl;
	else
		std::cout << "int    : " << static_cast<int>(n) << std::endl;
	if (n < std::numeric_limits<float>::min() || n > std::numeric_limits<float>::max())
		std::cout << "float  : impossible" << std::endl;
	else
		std::cout << "float  : " << static_cast<float>(n) << "f" << std::endl;
	std::cout << "double : " << n << std::endl;

}

int	main(int ac, char **av)
{
	if (ac != 2)
		std::cout << "Usage: ./convert [string]" << std::endl;
	else
	{
		std::string	s = av[1];
		int			type = detectType(s);

		if (type == IMPOSSIBLE)
			std::cout << "impossible for all types" << std::endl;
		else
		{
			// void	(*convert[4])(std::string) = {convertFromChar, 
			// 									  convertFromInt, 
			// 									  convertFromFloat, 
			// 									  convertFromDouble};
			try
			{
				convert(s);
			}
			catch (std::exception &e)
			{
				std::cout << "impossible for all types" << std::endl;
			}
		}
	}
	return 0;
}
