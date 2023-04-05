/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 12:59:28 by aamajane          #+#    #+#             */
/*   Updated: 2023/04/05 20:57:36 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &copy)
{
	*this = copy;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs)
{
	this->_database = rhs._database;
	return *this;
}

BitcoinExchange::~BitcoinExchange() {}

void	BitcoinExchange::readDatabase(std::string fileName)
{
	std::ifstream	file(fileName);
	std::string		line;

	if (!file.is_open())
		throw std::runtime_error("Error: could not open" + fileName);

	while (std::getline(file, line))
	{
		std::string	date = line.substr(0, line.find(','));
		float		price = std::stof(line.substr(line.find(',') + 1));
		this->_database[date] = price;
	}

	file.close();
}

void	BitcoinExchange::readInputFile(std::string fileName)
{
	std::ifstream	file(fileName);
	std::string		line;

	if (!file.is_open())
		throw std::runtime_error("Error: could not open " + fileName);

	while (std::getline(file, line))
	{
		line.erase(std::remove(line.begin(), line.end(), ' '), line.end());
		if (std::count(line.begin(), line.end(), '|') != 1)
			std::cout << "Error: invalid format" << std::endl;
		else
		{
			std::string	date = line.substr(0, line.find('|'));
			float		count = std::stof(line.substr(line.find('|') + 1));
			try
			{
				isDateValid(date);
				isCountValid(count);
			}
			catch(const std::exception &e)
			{
				std::cout << e.what() << std::endl;
			}
			
		}
	}

	file.close();
}

void	BitcoinExchange::isDateValid(std::string date)
{
	int	count = 0;

	for (int i = 0; i < date.length(); i++)
	{
		if (date[i] == '-')
			count++;
		else if (!isdigit(date[i]))
			throw std::runtime_error("Error: invalid date");
	}

	if (count != 2)
		throw std::runtime_error("Error: invalid date");

	int	year = std::stoi(date.substr(0, date.find('-')));
	int	month = std::stoi(date.substr(date.find('-') + 1, date.rfind('-')));
	int	day = std::stoi(date.substr(date.rfind('-') + 1));

	if (year < 2009 || month < 1 || month > 12 || day < 1 || day > 31)
		throw std::runtime_error("Error: invalid date");
}

void	BitcoinExchange::isCountValid(float count)
{
	if (count < 0)
		throw std::runtime_error("Error: not a positive number");
	else if (count > 1000)
		throw std::runtime_error("Error: too large number");
}
