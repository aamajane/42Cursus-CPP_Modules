/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 22:18:20 by aamajane          #+#    #+#             */
/*   Updated: 2022/11/01 01:22:51 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"

Account::Account(int initial_deposit)
{
}

Account::~Account(void)
{
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
}

void	Account::makeDeposit(int deposit)
{
}

bool	Account::makeWithdrawal(int withdrawal)
{
}

int	Account::checkAmount(void) const
{
}

void	Account::displayStatus(void) const
{
}

void	Account::_displayTimestamp(void)
{
}
