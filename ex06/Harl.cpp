/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 09:17:19 by mlouis            #+#    #+#             */
/*   Updated: 2025/12/18 19:17:04 by mlouis           ###   ########.fr       */
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

void	complain(std::string level)
{
	switch ()
	{
		case :
	}
}

void	debug(void)
{
	std::cout << "this is debug\n";
}

void	info(void)
{
	std::cout << "that's info\n";
}

void	warning(void)
{
	std::cout << "beep-beep, here's a warning\n";
}

void	error(void)
{
	std::cout << "error.\n";
}

