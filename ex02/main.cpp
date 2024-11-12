/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:31:54 by abekri            #+#    #+#             */
/*   Updated: 2024/11/11 00:33:37 by abekri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Address of the string: " << &str << std::endl;
    std::cout << "Address of the stringPTR: " << stringPTR << std::endl;
    std::cout << "Address of the stringREF: " << &stringREF << std::endl;
    std::cout << "Value of String: " << str << std::endl;
    std::cout << "Value pointed to by StringPTR: " << *stringPTR << std::endl;
    std::cout << "Value referred to by StringREF: " << stringREF << std::endl;

    return 0;
}
