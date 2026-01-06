/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 10:06:38 by mlouis            #+#    #+#             */
/*   Updated: 2025/12/30 12:23:03 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
	public:
		void announce(void);
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	setName(const std::string& name);
	private:
		std::string _name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif
