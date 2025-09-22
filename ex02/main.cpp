/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 21:42:25 by hbousset          #+#    #+#             */
/*   Updated: 2025/09/22 12:33:09 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "The memory address of the string variable is: " << &str << std::endl;
	std::cout << "The memory address held by stringPTR is: " << &ptr << std::endl;
	std::cout << "The memory address held by stringREF is: " << &ref << std::endl;

	std::cout << std::endl;

	std::cout << "The value of the string variable is: " << str << std::endl;
	std::cout << "The value pointed to by stringPTR is: " << ptr << std::endl;
	std::cout << "The value pointed to by stringREF is: " << ref << std::endl;
	return 0;
}
