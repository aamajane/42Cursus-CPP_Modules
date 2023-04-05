/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 12:59:31 by aamajane          #+#    #+#             */
/*   Updated: 2023/04/05 01:59:09 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <algorithm>
#include <iostream>
#include <fstream>
#include <map>

class BitcoinExchange
{
	private:
		std::map<std::string, float>	_database;

	public:
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &copy);
		BitcoinExchange &operator=(BitcoinExchange const &rhs);
		~BitcoinExchange();

		void	readDatabase(std::string fileName);
		void	readInputFile(std::string fileName);
		bool	isDateValid(std::string date);
		bool	isCountValid(float count);
};

#endif
