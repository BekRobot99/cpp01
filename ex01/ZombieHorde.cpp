/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:33:25 by abekri            #+#    #+#             */
/*   Updated: 2024/11/11 22:13:01 by abekri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
    if (N <= 0)
        return nullptr; 

    Zombie* horde = new Zombie[N];
    int i = 0;

    while (i < N)
    {
        horde[i].setName(name);
        i++;
    }

	return (horde);
}
