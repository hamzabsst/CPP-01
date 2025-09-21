/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 18:44:00 by hbousset          #+#    #+#             */
/*   Updated: 2025/09/21 21:25:26 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(int N)
{
	std::cout << "Zombie " << this->name << " is about to kill you"<< std::endl;
}
Zombie::~Zombie()
{
	std::cout << "Zombie " << this->name << " was just joking"<< std::endl;
}
void Zombie::announce(void)
{
	std::cout << this->name << " :BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::setName(std::string name)
{
	this->name = name;
}
