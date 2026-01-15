/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 13:33:28 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/15 16:30:08 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << &str << "\n";
	std::cout << &stringPTR << "\n";
	std::cout << &stringREF << "\n";

	std::cout << str << "\n";
	std::cout << stringPTR << "\n";
	std::cout << stringREF << "\n";


	// std::cout << "****************\n";
	// str = "it's now banana";

	// std::cout << &str << "\n";
	// std::cout << stringPTR << "\n";
	// std::cout << &stringREF << "\n";
	
	// std::cout << str << "\n";
	// std::cout << *stringPTR << "\n";
	// std::cout << stringREF << "\n";


	// std::cout << "****************\n";
	// stringREF = "oats";

	// std::cout << &str << "\n";
	// std::cout << stringPTR << "\n";
	// std::cout << &stringREF << "\n";
	
	// std::cout << str << "\n";
	// std::cout << *stringPTR << "\n";
	// std::cout << stringREF << "\n";


	// std::cout << "****************\n";
	// *stringPTR = "yoghurt";

	// std::cout << &str << "\n";
	// std::cout << stringPTR << "\n";
	// std::cout << &stringREF << "\n";
	
	// std::cout << str << "\n";
	// std::cout << *stringPTR << "\n";
	// std::cout << stringREF << "\n";


	// std::cout << "****************\n";
	// std::string	str2 = "breakfast club!";
	// stringPTR = &str2;
	// std::cout << "str= " << str << "\n";
	// stringREF = str2;

	// std::cout << &str2 << "\n";
	// std::cout << stringPTR << "\n";
	// std::cout << &stringREF << "\n";

	// std::cout << str2 << "\n";
	// std::cout << *stringPTR << "\n";
	// str2 = "whoops";
	// std::cout << str2 << "\n";
	// std::cout << *stringPTR << "\n";
	// std::cout << stringREF << "\n";
	// std::cout << str << "\n";
}
