/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 10:37:28 by mlouis            #+#    #+#             */
/*   Updated: 2025/12/04 13:22:51 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>
#include <string>
#include <iostream>

static std::string	intToStr(int nb)
{
	std::stringstream ss;
	ss << nb;
	return ss.str();
}

Zombie*	zombieHorde(int N, std::string name)
{
	// Zombie* zombies[N];

	// for (int i = 0 ; i < N ; i++)
	// {
	// 	zombies[i] = new Zombie(name + intToStr(i + 1));
	// }
	// return (zombies);

	// Zombie* zombies = new Zombie[N];

	// for (int i = 0 ; i < N ; i++)
	// {
	// 	zombies[i] = Zombie(name + intToStr(i + 1));
	// }
	// return (zombies);

	Zombie* zombies = new Zombie[N];

	for (int i = 0 ; i < N ; i++)
	{
		zombies[i].setName(name + intToStr(i + 1));
	}
	return (zombies);
}
