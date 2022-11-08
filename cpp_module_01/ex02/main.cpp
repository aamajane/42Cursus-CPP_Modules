/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:22:19 by aamajane          #+#    #+#             */
/*   Updated: 2022/11/08 22:54:08 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string  string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "The memory address of the string variable: " << &string << std::endl;
	std::cout << "The memory address held by stringPTR     : " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF     : " << &stringREF << std::endl;

	std::cout << "The value of the string variable         : " << string << std::endl;
	std::cout << "The value pointed to by stringPTR        : " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF        : " << stringREF << std::endl;
}
