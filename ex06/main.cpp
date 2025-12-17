/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 09:16:58 by mlouis            #+#    #+#             */
/*   Updated: 2025/12/10 10:05:37 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>
#include <iostream>

int	main(int argc, char *argv[])
{
	if (argc != 2 || argv[1])
	{
		std::cout << "Error\nCommand should be `./harl [DEBUG|INFO|WARNING|ERROR]`" << std::endl;
		return (1);
	}
	Harl	harl;

	harl.complain(argv[1]);
}
