/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 12:59:31 by aamajane          #+#    #+#             */
/*   Updated: 2023/04/04 21:04:28 by aamajane         ###   ########.fr       */
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
		std::map<std::string, float>	_input;

	public:
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &copy);
		BitcoinExchange &operator=(BitcoinExchange const &rhs);
		~BitcoinExchange();

		void	readDatabase(void);
		void	readInputFile(std::string fileName);
};

#endif
