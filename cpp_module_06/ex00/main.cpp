/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:05:45 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/12 15:16:12 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cfloat>

#define CHAR		0
#define INT			1
#define FLOAT		2
#define DOUBLE		3
#define IMPOSSIBLE	4

int	detectType(std::string s)
{
	if (s.length() == 3 && s.at(0) == '\'' && s.at(2) == '\'')
		return CHAR;

	if (s.at(0) == '-' || s.at(0) == '+')
		s = s.substr(1);

	if (s == "inff" || s == "nanf")
		return FLOAT;

	if (s == "inf" || s == "nan")
		return DOUBLE;

	int	dot = 0;

	for (size_t i = 0; i < s.length(); i++)
	{
		if (i == s.length() - 1 &&  (s.at(i) == 'f' || s.at(i) == 'F'))
			;
		else if (s.at(i) == '.')
			dot++;
		else if (s.at(i) < '0' || s.at(i) > '9')
			return IMPOSSIBLE;
	}

	if (dot == 1 && (s.at(s.length() - 1) == 'f' || s.at(s.length() - 1) == 'F'))
		return FLOAT;
	else if (dot == 1)
		return DOUBLE;
	else
		return INT;

	return IMPOSSIBLE;
}

void	convert(int type, std::string s)
{
	double	n = s.at(1);

	if (type == INT)
		n = std::stoi(s);
	else if (type == FLOAT)
		n = std::stof(s);
	else if (type == DOUBLE)
		n = std::stod(s);

	if (type > CHAR && (n < CHAR_MIN || n > CHAR_MAX))
		std::cout << "char   : impossible" << std::endl;
	else if (std::isprint(static_cast<int>(n)))
		std::cout << "char   : '" << static_cast<char>(n) << "'" << std::endl;
	else
		std::cout << "char   : Non displayable" << std::endl;

	if (type > INT && (n < INT_MIN || n > INT_MAX))
		std::cout << "int    : impossible" << std::endl;
	else
		std::cout << "int    : " << static_cast<int>(n) << std::endl;

	if (type > FLOAT && (n < FLT_MIN || n > FLT_MAX))
		std::cout << "float  : impossible" << std::endl;
	else
		std::cout << "float  : " << static_cast<float>(n) << "f" << std::endl;

	std::cout << "double : " << static_cast<double>(n) << "" << std::endl;
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
			try
			{
				convert(type, s);
			}
			catch (std::exception &e)
			{
				std::cout << "impossible for all types" << std::endl;
			}
		}
	}
	return 0;
}
