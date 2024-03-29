/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:36:24 by aamajane          #+#    #+#             */
/*   Updated: 2022/12/27 18:28:45 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	: _name("Default"), _healthPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string const name)
	: _name(name), _healthPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap string constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
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

std::string	ClapTrap::getName() const
{
	return this->_name;
}

unsigned int	ClapTrap::getHealthPoints() const
{
	return this->_healthPoints;
}

unsigned int	ClapTrap::getEnergyPoints() const
{
	return this->_energyPoints;
}

unsigned int	ClapTrap::getAttackDamage() const
{
	return this->_attackDamage;
}

void	ClapTrap::attack(std::string const &target)
{
	if (this->_healthPoints > 0 && this->_energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target 
		<< ", causing " << this->_attackDamage << " points of damage" << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << "ClapTrap " << this->_name << " can't attack" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_healthPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " takes " << amount 
		<< " points of damage" << std::endl;
		if (amount > this->_healthPoints)
			amount = this->_healthPoints;
		this->_healthPoints -= amount;
	}
	else
		std::cout << "ClapTrap " << this->_name << " can't take damage" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_healthPoints > 0 && this->_energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " is repaired by " 
		<< amount << " points" << std::endl;
		this->_healthPoints += amount;
		this->_energyPoints--;
	}
	else
		std::cout << "ClapTrap " << this->_name << " can't be repaired" << std::endl;
}

std::ostream	&operator<<(std::ostream &out, ClapTrap const &rhs)
{
	out << "Name        : " << rhs.getName() << std::endl;
	out << "HealthPoints: " << rhs.getHealthPoints() << std::endl;
	out << "EnergyPoints: " << rhs.getEnergyPoints() << std::endl;
	out << "AttackDamage: " << rhs.getAttackDamage() << std::endl;
	return out;
}
