/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:46:55 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/14 18:27:23 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>

template <typename T>
bool	easyFind(T &container, int n)
{
	typename T::iterator	begin = container.begin();
	typename T::iterator	end = container.end();
	typename T::iterator	it = std::find(begin, end, n);

	if (it == end)
		return (false);
	return (true);
}
