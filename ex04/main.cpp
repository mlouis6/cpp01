/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 09:55:35 by mlouis            #+#    #+#             */
/*   Updated: 2025/12/17 09:48:51 by mlouis           ###   ########.fr       */
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
		
	
	std::ifstream	ifile(argv[1]);
	if (!ifile)
	{
		std::cout << "Error\nCouldn't open file, check the name or permission\n";
		return (1);
	}

	std::ofstream	ofile((args[1] + ".replace").c_str());
	
	if(!ofile)
	{
		std::cout << "Error\nCouldn't create file\n";
		ifile.close();
		return (1);
	}
	std::string	line;

	while (std::getline(ifile, line))
	{
		if (line.find(argv[2]) == std::string::npos)
		{
			ofile << line + '\n';
			continue ;
		}

		size_t	pos = 0;
		size_t	old_pos = pos;
		std::string	new_line;
		while ((pos = line.find(argv[2], pos)) != std::string::npos)
		{
			new_line.append(line.substr(old_pos, pos));
			new_line.append(args[3]);
			pos += args[2].length();
			old_pos = pos;
		}
		new_line.append(line, old_pos, line.length() - old_pos + 1);
		ofile << new_line + "\n";
	}
	ifile.close();
	ofile.close();
	return (0);
}
