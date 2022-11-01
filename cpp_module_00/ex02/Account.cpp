/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 22:18:20 by aamajane          #+#    #+#             */
/*   Updated: 2022/11/02 00:13:22 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <time.h>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void)
{
}

Account::Account(void)
{
	this->_accountIndex = 0;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	for (int i = 0; i < Account::_nbAccounts; i++)
	{
		Account::_displayTimestamp();
		std::cout << "index:" << i << ";";
		std::cout << "amount:" << Account::_totalAmount << ";";
		std::cout << "created" << std::endl;
	}
	Account::displayStatus();
}

Account::Account(int initial_deposit)
{
	(void)initial_deposit;
	for (int i = 0; i < Account::_nbAccounts; i++)
	{
		Account::_displayTimestamp();
		std::cout << "index:" << i << ";";
		std::cout << "amount:" << Account::_totalAmount << ";";
		std::cout << "created" << std::endl;
	}
	Account::displayStatus();
}

Account::~Account(void)
{
	for (int i = 0; i < Account::_nbAccounts; i++)
	{
		Account::_displayTimestamp();
		std::cout << "index:" << i << ";";
		std::cout << "amount:" << Account::_totalAmount << ";";
		std::cout << "closed" << std::endl;
	}
}

int	Account::getNbAccounts(void)
{
	return Account::_nbAccounts;
}

int	Account::getTotalAmount(void)
{
	return Account::_totalAmount;
}

int	Account::getNbDeposits(void)
{
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals(void)
{
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void)
{
	for (int i = 0; i < Account::_nbAccounts; i++)
	{
		Account::_displayTimestamp();
		std::cout << "index:" << i << ";";
		std::cout << "amount:" << Account::_totalAmount << ";";
		std::cout << "deposits:" << Account::_totalNbDeposits << ";";
		std::cout << "withdrawals:" << Account::_totalNbWithdrawals;
		std::cout << std::endl;
	}
}

void	Account::makeDeposit(int deposit)
{
	return;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	return true;
}

int	Account::checkAmount(void) const
{
	return this->_amount;
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals;
	std::cout << std::endl;
}
