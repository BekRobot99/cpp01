/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:32:16 by abekri            #+#    #+#             */
/*   Updated: 2024/11/11 06:36:51 by abekri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void randomChump(std::string name);

int	main(void)
{
	Zombie*	heapZombie;

	heapZombie = newZombie("HeapZombie"); // I allocate a new Zombie in the heap
	heapZombie->announce();
	delete(heapZombie); // I Ensure to free heap-allocated zombies to avoid memory leaks

    std::cout << std::endl;

	Zombie	zombieStack("Zombie1"); // I create a new Zombie in the stack

	zombieStack.announce();

    std::cout << std::endl;
	randomChump("StackZombie");

	return (0);
}
