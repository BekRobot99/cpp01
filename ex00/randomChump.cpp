/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:32:30 by abekri            #+#    #+#             */
/*   Updated: 2024/11/10 06:25:14 by abekri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// randomChump.cpp
#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie zombie(name);
    zombie.announce();
}
