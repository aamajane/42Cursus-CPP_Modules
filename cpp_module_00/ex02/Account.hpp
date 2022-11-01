/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:27:06 by aamajane          #+#    #+#             */
/*   Updated: 2022/11/01 15:35:23 by aamajane         ###   ########.fr       */
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

		static void	_displayTimestamp(void);

		int	_accountIndex;
		int	_amount;
		int	_nbDeposits;
		int	_nbWithdrawals;

		Account(void);

	public:
		typedef Account		t;

		static int	getNbAccounts(void);
		static int	getTotalAmount(void);
		static int	getNbDeposits(void);
		static int	getNbWithdrawals(void);
		static void	displayAccountsInfos(void);

		Account(int initial_deposit);
		~Account(void);

		void	makeDeposit(int deposit);
		bool	makeWithdrawal(int withdrawal);
		int		checkAmount(void) const;
		void	displayStatus(void) const;
};

#endif
