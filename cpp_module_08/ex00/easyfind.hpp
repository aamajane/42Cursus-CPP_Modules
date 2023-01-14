/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:46:55 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/14 18:15:01 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>

template <typename T>
bool	easyfind(T &container, int n)
{
	typename T::iterator	it;

	it = std::find(container.begin(), container.end(), n);
	if (it == container.end())
		return (false);
	return (true);
}
