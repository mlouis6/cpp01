/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 14:06:52 by mlouis            #+#    #+#             */
/*   Updated: 2025/12/05 09:38:42 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
	public:
		Weapon(void) {};
		Weapon(std::string type) : _type(type) {};
		const std::string&	getType(void);
		void	setType(const std::string& type);
	private:
		std::string	_type;
};

#endif