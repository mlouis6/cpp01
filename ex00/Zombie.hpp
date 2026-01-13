/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 15:33:14 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/13 13:32:50 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
	public:
		void announce(void);
		Zombie(std::string name);
		~Zombie(void);
	private:
		std::string _name;
};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

#endif
