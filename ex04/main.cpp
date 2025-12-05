/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 09:55:35 by mlouis            #+#    #+#             */
/*   Updated: 2025/12/05 13:10:18 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Error\nExpected format: <file> <old string> <new string>\n";
		return (1);
	}
	
	std::string	args[argc];
	for(int i = 0; i < argc; ++i)
	{
		args[i] = argv[i];
	}

	std::string	filename;
	filename = argv[1];

	std::ifstream	ifile(argv[1]);
	if (!ifile)
	{
		std::cout << "Error\nCouldn't open file, check the name or permission\n";
		return (1);
	}

	std::ofstream	ofile((filename + ".replace").c_str());
	
	if(!ofile)
	{
		std::cout << "Error\nCouldn't create file\n";
		ifile.close();
		return (1);
	}
	std::string	line;
	while (std::getline(ifile, line))
	{
		/**
		 * bienvenue
		 * 'nv' -> 'hello'
		 * 1) 'bie' (from [0, 2])
		 * 2) 'enue' (from [len -5, len -1])
		 * 3) 'hello' (from [pos, args[3].len + pos])
		 * 
		 * find in while in case of multiple (like 'en' in bienvenue)
		 * but find from last pos
		 * avoid 'en' -> 'english' to inifinite loop
		 * 
		 */

		if (int pos = line.find(argv[2]) != std::string::npos)
		{
			int	nl_len = line.length() + args[3].length() - args[2].length();
			std::string	new_line(nl_len, '\0');
			for (int i = 0; i < (int) line.length(); ++i)
			{
				// std::cout << "i= " << i << "; pos= " << pos << "; len= " << args[2].length() << "\n";
				new_line[i] = line[i];
				// TODO: offset
				int j = 0;
				for (; i >= pos - 1 && i < (int) args[2].length(); ++j)
				{
					new_line[i] = args[3][j];
					// std::cout << "\n(" << i << ")nl= '" << new_line[i] << "'\n";
					// std::cout << j << ")" << args[3][j] << " ";
					++i;
					// if (i > (int) line.length())
					// 	break ;
				}
				std::string tmp(nl_len, '\0'); //TODO: find precise length
				while (j < nl_len)
				{
					
					new_line
				}
				std::cout << "nl= '" << new_line << "'\n";
			}
			ofile << new_line + "\n";
		}
		else
		{
			ofile << line + "\n";
		}
	}
	ifile.close();
	ofile.close();
	return (0);
}
