/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:47:49 by abekri            #+#    #+#             */
/*   Updated: 2024/11/12 10:31:50 by abekri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(nullptr) {}

HumanB::~HumanB() {}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack(void) const
{
	if (_weapon)
    {
		std::cout << this->_name << " attacks with his " << (this->_weapon)->getType();
		std::cout << std::endl;
	}
	else
	{
		std::cout << this->_name << " has no weapon to attack with! " << std::endl;
	}
}