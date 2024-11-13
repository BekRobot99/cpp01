/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 02:41:54 by abekri            #+#    #+#             */
/*   Updated: 2024/11/13 23:22:11 by abekri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (void)
{
	Harl harl;

	std::cout << std::endl << "Testing DEBUG level:" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl << "Testing INFO level:" << std::endl;;
	harl.complain("INFO");
	std::cout << std::endl << "Testing WARNING level:" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl << "Testing ERROR level:" << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl << "Level Not exist" << std::endl;
	harl.complain("not_exist");
	return (0);
}
