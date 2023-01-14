/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:46:55 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/14 20:08:44 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <exception>

class NotFoundException : public std::exception
{
	public:
		const char	*what() const throw()
		{
			return "Element not found";
		}
};

template <typename T>
int	easyFind(T const &ToSearch, int ToFind)
{
	typename T::const_iterator it;

	it = std::find(ToSearch.begin(), ToSearch.end(), ToFind);
	if (it == ToSearch.end())
		throw NotFoundException();
	return *it;
}

#endif
