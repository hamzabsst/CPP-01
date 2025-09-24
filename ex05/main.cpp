/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 14:49:41 by hbousset          #+#    #+#             */
/*   Updated: 2025/09/24 16:53:06 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl _harl;
	std::string	input;

	std::cout << "Enter a complaint: (debug, info ,warning, error):" << std::endl;
	std::getline(std::cin, input);
	_harl.complain(input);
	return 0;
}

