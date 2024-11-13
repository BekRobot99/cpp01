/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:48:13 by abekri            #+#    #+#             */
/*   Updated: 2024/11/12 11:51:14 by abekri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(std::string type) : _type(type){}

Weapon::~Weapon(){}

const std::string& Weapon::getType() const
{
	return type;
}

void	Weapon::setType(std::string type)
{
	_type = type;
}