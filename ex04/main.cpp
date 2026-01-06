/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 09:55:35 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/06 15:27:56 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int	sed(std::string args[])
{
	std::ifstream	ifile(args[1].c_str());
	if (!ifile.good())
	{
		std::cout << "Error\nCouldn't open file, check the name or permission\n";
		return (1);
	}

	std::ofstream	ofile((args[1] + ".replace").c_str());
	if(!ofile.good())
	{
		std::cout << "Error\nCouldn't create file\n";
		return (1);
	}
	std::string	line;
	
	while (std::getline(ifile, line))
	{
		if (line.find(args[2]) == std::string::npos)
		{
			ofile << line + '\n';
			continue ;
		}

		size_t	pos = 0;
		size_t	old_pos = pos;
		std::string	new_line;
		while ((pos = line.find(args[2], pos)) != std::string::npos)
		{
			new_line.append(line.substr(old_pos, pos - old_pos));
			new_line.append(args[3]);
			pos += args[2].length();
			old_pos = pos;
		}
		new_line.append(line, old_pos, line.length() - old_pos + 1);
		ofile << new_line + "\n";
	}
	return (0);
}

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
		
	if (sed(args))
		return (1);
	return (0);
}
