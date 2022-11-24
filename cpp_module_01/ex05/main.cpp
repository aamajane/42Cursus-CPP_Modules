/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:36:43 by aamajane          #+#    #+#             */
/*   Updated: 2022/11/24 22:36:47 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl harl;
	std::cout << "********** TEST 1 **********" << std::endl;
	harl.complain("DEBUG");
	std::cout << "********** TEST 2 **********" << std::endl;
	harl.complain("INFO");
	std::cout << "********** TEST 3 **********" << std::endl;
	harl.complain("WARNING");
	std::cout << "********** TEST 4 **********" << std::endl;
	harl.complain("ERROR");
	std::cout << "********** TEST 5 **********" << std::endl;
	harl.complain("OTHERS");
	return 0;
}
