/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:33:01 by abekri            #+#    #+#             */
/*   Updated: 2024/11/11 21:49:27 by abekri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int numZombies = 5;
    Zombie* horde = zombieHorde(numZombies, "Zombie");
    int i = 0;
    
    while (i < numZombies)
    {
        std::cout << "Index " << i << ": ";
        horde[i].announce();
        i++;
    }

    delete[] horde;

    return 0;
}
