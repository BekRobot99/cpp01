/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abekri <abekri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 02:41:20 by abekri            #+#    #+#             */
/*   Updated: 2024/11/12 22:19:11 by abekri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

void	replaceAndWrite(std::ofstream &outputfile, std::string s1, std::string s2, std::string inputfile)
{
    size_t skip;
    size_t position = inputfile.find(s1);
    
    if (position != std::string::npos)
    {
        outputfile << inputfile.substr(0, position);
        outputfile << s2;
        skip = position + s1.length();
        replaceAndWrite(outputfile, s1, s2, inputfile.substr(skip));
    } 
    else 
    {
        outputfile << inputfile;
        return;
    }
}

int	main(int argc, char **argv)
{
    std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	std::ifstream	inputfile;
	std::ofstream	outputfile;
	std::string		buffer;
    std::string		replace;
	std::string		file = argv[1];
	
	if (argc != 4)
    {
		std::cerr << "Usage: " << argv[0] << " needs to add <filename> <s1> <s2>" << std::endl;
        return 1;
    }

	inputfile.open(file.c_str());
	if (inputfile.good() == false)
    {
		std::cerr << "Error : input file" << std::endl;
        return (1);
    }
	
	replace = file + ".replace";
	outputfile.open(replace.c_str());
	if (outputfile.good() == false)
	{
		inputfile.close();
		std::cerr << "Error : output file" << std::endl;
	    return (1);
	}

	while (getline(inputfile, buffer))
		replaceAndWrite(outputfile, s1, s2, buffer + '\n');
	
	inputfile.close();
	outputfile.close();
	return (0);
}
