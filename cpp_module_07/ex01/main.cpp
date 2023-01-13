/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 01:22:19 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/13 01:27:42 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void	print(T const &i)
{
	std::cout << i << std::endl;
}

// test with int array and print function
// test with string array and print function
// test with float array and print function
int	main()
{
	std::cout << "========== TEST1 ==========" << std::endl;
	int	array[] = {0, 1, 2, 3, 4};
	::iter(array, 5, print);

	std::cout << "========== TEST2 ==========" << std::endl;
	double	array3[] = {0.0, 1.1, 2.2, 3.3, 4.4};
	::iter(array3, 5, print);

	std::cout << "========== TEST3 ==========" << std::endl;
	std::string	array2[] = {"Hello", "World", "!"};
	::iter(array2, 3, print);

	return 0;
}
