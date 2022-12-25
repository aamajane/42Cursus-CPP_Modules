/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 00:01:44 by aamajane          #+#    #+#             */
/*   Updated: 2022/12/26 00:18:41 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called." << std::endl;
	this->_name = "Default";
	this->_healthPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap string constructor called." << std::endl;
	this->_name = name;
	this->_healthPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &copy)
{
	std::cout << "FragTrap copy constructor called." << std::endl;
	*this = copy;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_healthPoints = rhs._healthPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return *this;
}

void	FragTrap::attack(std::string const &target)
{
	if (this->_healthPoints > 0 && this->_energyPoints > 0)
	{
		this->_energyPoints--;
		std::cout << "FragTrap " << this->_name << " attacks " << target 
		<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
	else
		std::cout << "FragTrap " << this->_name << " can't attack!" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	if (this->_healthPoints > 0 && this->_energyPoints > 0)
	{
		this->_energyPoints--;
		std::cout << "FragTrap " << this->_name << " gives high fives!" << std::endl;
	}
	else
		std::cout << "FragTrap " << this->_name << " can't give high fives!" << std::endl;
}
