/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 00:57:12 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/12 17:53:47 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
	std::string s;
	int 		n;
};

uintptr_t	serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data	*deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int	main()
{
	Data	*data = new Data;

	data->s = "Hello World!";
	data->n = 42;

	uintptr_t	ser = serialize(data);
	Data		*des = deserialize(ser);

	if (data == des)
	{
		std::cout << "Success!" << std::endl;

		std::cout << "data adderss: " << data << std::endl;
		std::cout << "des address : " << des << std::endl;
		std::cout << "data string : " << data->s << std::endl;
		std::cout << "des string  : " << des->s << std::endl;
		std::cout << "data int    : " << data->n << std::endl;
		std::cout << "des int     : " << des->n << std::endl;
		
	}
	else
		std::cout << "Failure!" << std::endl;
	
	delete data;
	
	return 0;
}
