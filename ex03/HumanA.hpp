/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 14:13:59 by mlouis            #+#    #+#             */
/*   Updated: 2025/12/05 09:18:13 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>

class HumanA
{
	public:
		HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {};
		void	attack(void);
	private:
		std::string	_name;
		Weapon&	_weapon;
};

#endif
