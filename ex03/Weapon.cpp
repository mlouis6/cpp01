/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 14:06:49 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/06 15:45:49 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	;
}
Weapon::Weapon(std::string type) : _type(type)
{
	;
}

void	Weapon::setType(const std::string& type)
{
	_type = type;
}

const std::string&	Weapon::getType(void)
{
	return (_type);
}
