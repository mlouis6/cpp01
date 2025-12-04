/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 10:06:38 by mlouis            #+#    #+#             */
/*   Updated: 2025/12/04 13:20:16 by mlouis           ###   ########.fr       */
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
		Zombie() {};
		Zombie(std::string name) : _name(name) {};
		~Zombie() { std::cout << _name << " out\n"; };
		Zombie&	operator=(const Zombie& z) { 
			if (&z == this)
				std::cout << "nope\n";
			std::cout << "banana\n";
			return (*this);
		};
		void	setName(const std::string& name);
	private:
		std::string _name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif
