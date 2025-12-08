/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 09:55:35 by mlouis            #+#    #+#             */
/*   Updated: 2025/12/08 13:01:57 by mlouis           ###   ########.fr       */
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
		size_t pos = 0;
		size_t	count = 0;

		while ((pos = line.find(argv[2], pos)) != std::string::npos) 
		{
			pos += args[2].length();
			++count;
		}
		pos = 0;
		size_t	nl_len = line.length() + args[3].length() * count - args[2].length() * count;
		std::string	new_line(nl_len + 1, '\0');
		std::string	tmp_line = line;
		while ((pos = tmp_line.find(argv[2], pos)) != std::string::npos) 
		{
			std::cout << "POS= " << pos << "\n";
			for (size_t i = 0 ; i < pos ; ++i)
				new_line[i] = line[i];
			for (size_t i = 1 ; i <= line.length() - pos - args[2].length(); ++i)
				new_line[nl_len - i] = line[line.length() - i];
			// TODO: fix issue
			size_t	pos2 = line.find(argv[2], pos);
			for (size_t i = 0 ; i < args[3].length() ; ++i)
			{
				new_line[pos2 + i] = args[3][i];
				std::cout << "pos: " << pos2 << " ; i= " << i << "\n";
			}
			//? end issue
			pos += args[2].length();
			line = new_line;
		}
		std::cout << "\n========\n";
		for (size_t i = 0 ; i < nl_len ; ++i)
			std::cout << new_line[i] << "(" << i << ")";
		std::cout << "\n========\n";
		ofile << line + "\n";
	}
	ifile.close();
	ofile.close();
	return (0);
}
