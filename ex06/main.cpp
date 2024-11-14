/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 02:43:30 by abekri            #+#    #+#             */
/*   Updated: 2024/11/14 01:06:08 by abekri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;
    const std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int level = 4;
    
    if (argc != 2) {
        std::cout << "Usage: ./complain [DEBUG, INFO, WARNING, ERROR]" << std::endl;
        return 1;
    }

    for (int i = 0; i < 4; i++) {
        if (argv[1] == levels[i])
        {
            level = i;
            break;
        }
    }

    switch (level) {
        case 0:
            harl.complain("DEBUG");
        case 1:
            harl.complain("INFO");
        case 2:
            harl.complain("WARNING");
        case 3:
            harl.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems. ]" << std::endl;
            break;
    }

    return 0;
}
