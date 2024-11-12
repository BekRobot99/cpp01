/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:32:37 by abekri            #+#    #+#             */
/*   Updated: 2024/11/10 06:32:21 by abekri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("Zombie"){}

Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << "Zombie " << name << " is created." << std::endl;
}
Zombie::~Zombie()
{
	std::cout << "Zombie " << name << " is destroyed." << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
