/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 10:36:34 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/13 13:34:09 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void)
{
	std::cout << "<nameless>: hi\n";
}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << _name + ": hello\n";
}

Zombie::~Zombie(void)
{
	std::cout << _name << " bye\n";
}

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::setName(const std::string& name)
{
	this->_name = name;
}
