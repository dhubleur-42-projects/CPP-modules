/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:08:33 by dhubleur          #+#    #+#             */
/*   Updated: 2022/04/26 13:13:11 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	if(argc != 4)
	{
		std::cout << "Use the following format: ./sed <file> <to find> <replace>" << std::endl;
		return 1;
	}
	std::string fileName = argv[1];
	std::string	outputName = fileName + ".replace";
	std::string toFind = argv[2];
	std::string	replace = argv[3];

	std::ifstream file;
	file.open(fileName.c_str());
	if (!file)
	{
        std::cout << "Unable to open the specified file" << std::endl;
        return 1;
    }
	std::ofstream output;
	std::remove(outputName.c_str());
	output.open(outputName.c_str(), std::fstream::app);
	if (!output)
	{
        std::cout << "Unable to open the output file" << std::endl;
        return 1;
    }
	
	std::string	line;
	while(std::getline(file, line))
	{
		size_t	pos = line.find(toFind);
		while (pos != std::string::npos)
        {
			line.erase(pos, toFind.length());
			line.insert(pos, replace);
			pos = line.find(toFind, pos + replace.size());
		}
        output << line << std::endl;
	}
	
	output.close();
	file.close();
}