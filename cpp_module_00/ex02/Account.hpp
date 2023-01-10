/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:27:06 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/10 20:46:09 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

class Account
{
	private:
		static int	_nbAccounts;
		static int	_totalAmount;
		static int	_totalNbDeposits;
		static int	_totalNbWithdrawals;

		static void	_displayTimestamp();

		int			_accountIndex;
		int			_amount;
		int			_nbDeposits;
		int			_nbWithdrawals;

		Account();

	public:
		typedef Account	t;

		static int	getNbAccounts();
		static int	getTotalAmount();
		static int	getNbDeposits();
		static int	getNbWithdrawals();

		static void	displayAccountsInfos();

		Account(int initial_deposit);
		~Account();

		void	makeDeposit(int deposit);
		bool	makeWithdrawal(int withdrawal);
		int		checkAmount() const;
		void	displayStatus() const;
};

#endif
