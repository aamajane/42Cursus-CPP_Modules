/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:19:49 by aamajane          #+#    #+#             */
/*   Updated: 2022/10/31 01:03:07 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
	private:
		std::string _preData[5];
		std::string _data[5];
	public:
		Contact(void);
		~Contact(void);
		void	addContact(void);
		void	printContact(void);
		void	printAll(void);
};

#endif
