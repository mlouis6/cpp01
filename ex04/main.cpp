/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 09:55:35 by mlouis            #+#    #+#             */
/*   Updated: 2025/12/10 12:50:26 by mlouis           ###   ########.fr       */
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
		std::string	new_line(1, '\0');
		while ((pos = line.find(argv[2], pos)) != std::string::npos)
		{
			new_line.resize(new_line.length() + pos);
			new_line = line.substr(pos, args[2].length());
			new_line.resize(new_line.length() + args[3].length());
			new_line.append(args[3]);
			pos += args[2].length();
		}
		new_line.append(line, pos, line.length() - pos + 1);
	}

	// while (std::getline(ifile, line))
	// {
	// 	//? std::string::assign() buffer
	// 	// substr
	// 	if (line.find(argv[2]) == std::string::npos)
	// 	{
	// 		ofile << line + "\n";
	// 		continue ;
	// 	}
	// 	size_t	pos = 0;
	// 	// size_t	old_pos = 0;
	// 	std::string	new_line;
	// 	while ((pos = line.find(argv[2], pos)) != std::string::npos)
	// 	{
	// 		size_t i = 0;
	// 		new_line.resize(pos + 1);
	// 		for ( ; i < pos ; ++i)
	// 		{
	// 			new_line[i] = line[i];
	// 			std::cout << "hello (" << i <<")\n";
	// 		}
	// 		pos += args[2].length();
	// 		// old_pos = pos;
	// 		new_line.append(args[3]);
			
	// 	}
	// 	for (size_t i=0 ; i < 20 ; ++i)
	// 	{
	// 		std::cout << "(" << i << ")" << new_line[i];
	// 	}
	// 	std::cout << "\n";
	// 	line = new_line;
	// 	ofile << line + "\n";
	// }


	// while (std::getline(ifile, line))
	// {
	// 	size_t pos = 0;
	// 	size_t	count = 0;

	// 	if (line.find(argv[2], pos) == std::string::npos)
	// 	{
	// 		ofile << line + "\n";
	// 		continue ;
	// 	}
	// 	while ((pos = line.find(argv[2], pos)) != std::string::npos) 
	// 	{
	// 		pos += args[2].length();
	// 		++count;
	// 	}
	// 	pos = 0;
	// 	size_t	nl_len = line.length() - 1 + (args[3].length()) * count;// - (args[2].length()) * count;
	// 	std::string	new_line(nl_len + 1, '\0');
	// 	std::string	tmp_line = line;
	// 	while ((pos = tmp_line.find(argv[2], pos)) != std::string::npos) 
	// 	{
	// 		for (size_t i = 0 ; i < pos ; ++i)
	// 			new_line[i] = line[i];
	// 		size_t	pos2 = line.find(argv[2], pos);
	// 		for (size_t i = 0 ; i < args[3].length() ; ++i)
	// 			new_line[pos2 + i] = args[3][i];
	// 		for (size_t i = 0 ; i < tmp_line.length() - pos - args[2].length() ; ++i)
	// 		{
	// 			new_line[args[3].length() + pos2 + i] = tmp_line[pos + args[2].length() + i];
	// 			std::cout << "'" << new_line[args[3].length() + pos2 + i] << "'(" << args[3].length() + pos + i << ") " ;
	// 		}
	// 		// std::cout << std::endl;
	// 		// for (size_t i = 0 ; i < nl_len ; ++i)
	// 		// {
	// 		// 	std::cout << "(" << i << ")" << new_line[i];
	// 		// }
	// 		// std::cout << std::endl;
	// 		pos += args[2].length();
	// 		line = new_line;
	// 	}
	// 	ofile << line + "\n";
	// }
	ifile.close();
	ofile.close();
	return (0);
}
