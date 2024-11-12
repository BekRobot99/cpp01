/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:32:42 by abekri            #+#    #+#             */
/*   Updated: 2024/11/11 06:29:23 by abekri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Zombie.hpp
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string	_name;

	public:
        Zombie();
        ~Zombie();
		Zombie(std::string name);
		
		void	announce(void) const;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
