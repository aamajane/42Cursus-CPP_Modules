/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 12:59:28 by aamajane          #+#    #+#             */
/*   Updated: 2023/04/04 21:09:38 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &copy)
{
	*this = copy;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs)
{
	this->_database = rhs._database;
	return *this;
}

BitcoinExchange::~BitcoinExchange()
{
}

void	BitcoinExchange::readDatabase(void)
{
	std::ifstream	file("data.csv");
	std::string		line;

	if (!file.is_open())
		throw std::runtime_error("Error: could not open data.csv");
	while (std::getline(file, line))
	{
		line.erase(std::remove(line.begin(), line.end(), ' '), line.end());
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
		std::string	date = line.substr(0, line.find('|'));
		float		bitcoinCount = std::stof(line.substr(line.find('|') + 1));
		this->_input[date] = bitcoinCount;
	}
	file.close();
}
