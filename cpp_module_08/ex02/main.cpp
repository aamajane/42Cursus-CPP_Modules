/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 20:13:51 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/16 19:46:18 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int	main()
{
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator	it = mstack.begin();
	MutantStack<int>::iterator	ite = mstack.end();

	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int>	s(mstack);


	// MutantStack<int>	mystack;

	// srand(time(NULL));
	// for (int i = 0; i < 10; i++)
	// 	mystack.push(rand() % 100);

	// std::cout << "mystack size : " << mystack.size() << std::endl;

	// MutantStack<int>::iterator	it = mystack.begin();
	// MutantStack<int>::iterator	ite = mystack.end();

	// std::cout << "mystack elements : ";
	// while (it != ite)
	// {
	// 	std::cout << *it << " ";
	// 	it++;
	// }
	// std::cout << std::endl;

	// for (int i = 0; i < 5; i++)
	// 	mystack.pop();

	// std::cout << "mystack size : " << mystack.size() << std::endl;

	// MutantStack<int>::reverse_iterator	rit = mystack.rbegin();
	// MutantStack<int>::reverse_iterator	rite = mystack.rend();

	// std::cout << "mystack elements : ";
	// while (rit != rite)
	// {
	// 	std::cout << *rit << " ";
	// 	rit++;
	// }
	// std::cout << std::endl;

	return 0;
}
