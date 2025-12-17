/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 09:17:27 by mlouis            #+#    #+#             */
/*   Updated: 2025/12/17 13:07:08 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

enum	e_lvl
{
	DEBUG,
	INFO,
	WARNING,
	ERROR
};



class Harl
{
	public:
		void	complain(std::string level);
		struct	s_lvl
		{
			std::string	level;
			int*		action();
		};
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};


#endif
