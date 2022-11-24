/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:36:43 by aamajane          #+#    #+#             */
/*   Updated: 2022/11/24 21:35:32 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl harl;
	std::cout << "********** DEBUG TEST **********" << std::endl;
	harl.complain("DEBUG");
	std::cout << "********** INFO TEST **********" << std::endl;
	harl.complain("INFO");
	std::cout << "********** WARNING TEST **********" << std::endl;
	harl.complain("WARNING");
	std::cout << "********** ERROR TEST **********" << std::endl;
	harl.complain("ERROR");
	std::cout << "********** OTHERS TEST **********" << std::endl;
	harl.complain("OTHERS");
	return 0;
}
