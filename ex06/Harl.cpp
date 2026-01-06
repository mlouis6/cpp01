/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 09:17:19 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/06 10:38:07 by mlouis           ###   ########.fr       */
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
	int i = 0;

	for ( ; i < total_LEVEL ; ++i)
	{
		if (level.compare(_lvl[i].name) == 0)
			break ;
	}

	switch (i)
	{
		case DEBUG:
			(this->*_lvl[DEBUG].func)();
		case INFO:
			(this->*_lvl[INFO].func)();
		case WARNING:
			(this->*_lvl[WARNING].func)();
		case ERROR:
			(this->*_lvl[ERROR].func)();
			break ;
		default:
			std::cout << "Invalid complain\n";
	}
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

