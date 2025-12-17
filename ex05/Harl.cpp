/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 09:17:19 by mlouis            #+#    #+#             */
/*   Updated: 2025/12/17 11:13:05 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

void	Harl::complain(std::string level)
{
	;
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

