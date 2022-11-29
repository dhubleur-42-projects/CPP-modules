/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 11:09:41 by dhubleur          #+#    #+#             */
/*   Updated: 2022/04/24 19:02:25 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

typedef struct {std::string name; int lvl;} LevelList;

int	main(int argc, char **argv)
{
	LevelList list[4] =
	{
		{"DEBUG", 0},
		{"INFO", 1},
		{"WARNING", 2},
		{"ERROR", 3}
	};
	int	filter = -1;
	if(argc == 2)
	{
		for(int i = 0; i < 4; i++)
		{
			if(list[i].name == argv[1])
				filter = list[i].lvl;
		}
	}
	Harl harl = Harl();

	switch(filter)
	{
		case 0:
			harl.complain("DEBUG");
			harl.complain("INFO");
			harl.complain("WARNING");
			harl.complain("ERROR");
			break;
		case 1:
			harl.complain("INFO");
			harl.complain("WARNING");
			harl.complain("ERROR");
			break;
		case 2:
			harl.complain("WARNING");
			harl.complain("ERROR");
			break;
		case 3:
			harl.complain("ERROR");
			break;
		default:
			std::cout << "[Probably complaining about insignificant problems]" << std::endl;
			break;
	}
}