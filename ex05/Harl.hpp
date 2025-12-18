/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 09:17:27 by mlouis            #+#    #+#             */
/*   Updated: 2025/12/18 17:46:19 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>

class Harl
{
	public:
		void	complain(std::string level);
	private:
		static void	debug(void);
		static void	info(void);
		static void	warning(void);
		static void	error(void);
		struct	s_lvl
		{
			std::string	name;
			void		(*func)();
		};
		static struct s_lvl	_lvl[];
};

#endif
