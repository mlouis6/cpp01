/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 09:17:27 by mlouis            #+#    #+#             */
/*   Updated: 2025/12/22 13:55:38 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>

enum e_level
{
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	total_LEVEL
};

class Harl
{
	public:
		void	complain(std::string level);
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		struct	s_lvl
		{
			std::string	name;
			void		(Harl::*func)();
		};
		static struct s_lvl	_lvl[];
};

#endif
