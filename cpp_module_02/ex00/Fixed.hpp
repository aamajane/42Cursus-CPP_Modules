/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 14:33:04 by aamajane          #+#    #+#             */
/*   Updated: 2022/12/15 20:03:19 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					_value;
		static const int	_fractionalBits = 8;

	public:
		Fixed();
		Fixed(Fixed const &copy);
		~Fixed();
	
		Fixed	&operator=(Fixed const &rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
