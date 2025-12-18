/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 09:17:19 by mlouis            #+#    #+#             */
/*   Updated: 2025/12/18 19:02:57 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::s_lvl	Harl::_lvl[] = {
								{ "DEBUG", &Harl::debug },
								{ "INFO", &Harl::info },
								{ "WARNING", &Harl::warning },
								{ "ERROR", &Harl::error }
							};

void	Harl::complain(std::string level)
{
	int size = sizeof(_lvl) / sizeof(struct s_lvl);

	for (int i = 0 ; i < size ; ++i)
	{
		if (level.compare(_lvl[i].name) == 0)
		{
			(this->*_lvl[i].func)();
			return ;
		}
	}
	std::cout << "Error\nInvalid complain\n";
}

void	Harl::debug(void)
{
	std::cout << "this is debug\n";
}

void	Harl::info(void)
{
	std::cout << "that's info\n";
}

void	Harl::warning(void)
{
	std::cout << "beep-beep, here's a warning\n";
}

void	Harl::error(void)
{
	std::cout << "error.\n";
}

