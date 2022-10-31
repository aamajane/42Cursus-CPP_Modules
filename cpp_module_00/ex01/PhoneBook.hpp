/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:19:55 by aamajane          #+#    #+#             */
/*   Updated: 2022/10/31 20:05:11 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact _contacts[8];
		int		_contactCount;
		int		_contactIndex;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	addContact(void);
		void	searchContact(void);
};

#endif
