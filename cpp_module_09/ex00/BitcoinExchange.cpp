/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 12:59:28 by aamajane          #+#    #+#             */
/*   Updated: 2023/04/08 21:23:41 by aamajane         ###   ########.fr       */
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

void	BitcoinExchange::processInputFile(std::string fileName)
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
			std::string	valueStr = line.substr(line.find('|') + 1);
			float		value = std::stof(valueStr);

			try
			{
				isDateValid(date);
				isValueValid(valueStr, value);
				getResult(date, value);
			}
			catch(std::exception const &e)
			{
				std::cout << e.what() << std::endl;
			}
		}
	}

	file.close();
}

void	BitcoinExchange::isDateValid(std::string date)
{
	for (size_t i = 0; i < date.length(); i++)
		if (!isdigit(date[i]) && date[i] != '-')
			throw std::runtime_error("Error: invalid date");

	if (std::count(date.begin(), date.end(), '-') != 2)
		throw std::runtime_error("Error: invalid date");

	int	year = std::stoi(date.substr(0, date.find('-')));
	int	month = std::stoi(date.substr(date.find('-') + 1, date.rfind('-')));
	int	day = std::stoi(date.substr(date.rfind('-') + 1));

	if (year < 2009 || month < 1 || month > 12 || day < 1 || day > 31)
		throw std::runtime_error("Error: invalid date");
}

void	BitcoinExchange::isValueValid(std::string valueStr, float value)
{
	for (size_t i = 0; i < valueStr.length(); i++)
		if (!isdigit(valueStr[i]) && valueStr[i] != '.')
			throw std::runtime_error("Error: invalid value");

	if (std::count(valueStr.begin(), valueStr.end(), '.') > 1)
		throw std::runtime_error("Error: invalid value");

	if (value < 0 || value > 1000)
		throw std::runtime_error("Error: invalid value");
}

void	BitcoinExchange::getResult(std::string date, float value)
{
	std::map<std::string, float>::iterator	itlow;
	itlow = this->_database.lower_bound(date);

	if (itlow->first != date)
		itlow--;

	std::cout << date << " => " << value << " = ";
	std::cout << value * itlow->second << std::endl;
}
