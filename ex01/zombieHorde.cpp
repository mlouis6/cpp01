/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 10:37:28 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/13 13:35:47 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>
// #include <sstream>

// static std::string	intToStr(int nb)
// {
// 	std::stringstream ss;
// 	ss << nb;
// 	return ss.str();
// }

Zombie*	zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return (NULL);
	Zombie* zombies = new Zombie[N];

	for (int i = 0 ; i < N ; ++i)
	{
		zombies[i].setName(name);// + intToStr(i + 1));
	}
	return (zombies);
}
