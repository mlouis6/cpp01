/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 14:14:08 by mlouis            #+#    #+#             */
/*   Updated: 2025/12/05 09:51:15 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>

class HumanB
{
	public:
		HumanB(std::string name) : _name(name), _weapon(NULL) {};
		void	setWeapon(const Weapon& weapon);
		void	attack(void);
	private:
		std::string	_name;
		Weapon*	_weapon;
};

#endif
