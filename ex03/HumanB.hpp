/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 14:14:08 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/06 10:21:46 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>

class HumanB
{
	public:
		HumanB(std::string name);
		void	setWeapon(const Weapon& weapon);
		void	attack(void);
	private:
		std::string	_name;
		Weapon*		_weapon;
};

#endif
