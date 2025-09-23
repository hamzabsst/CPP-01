/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 14:49:41 by hbousset          #+#    #+#             */
/*   Updated: 2025/09/23 15:04:12 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

//i still need to ask my peers about this 
int main()
{
	Harl _harl;
	std::string complainLevel;
	complainLevel = "debug";
	_harl.complain(complainLevel);
	return 0;
}
