/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 10:45:48 by mlouis            #+#    #+#             */
/*   Updated: 2025/12/04 13:08:28 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	h_size = 6;
	Zombie *horde = zombieHorde(h_size, "z");
	for (int i = 0 ; i < h_size ; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}
