/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 12:41:18 by hbousset          #+#    #+#             */
/*   Updated: 2025/09/22 13:28:23 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->has_weapon = false;
	std::cout << this->_name <<" joined the battlefield." << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << this->_name << " died." << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	this->has_weapon = true;
	std::cout << this->_name << " grabbed a " << this->_weapon->getType() << " to fight with." << std::endl;
}

void HumanB::attack(void)
{
	if (this->has_weapon)
	{
		std::cout << this->_name << " attacks with " << this->_weapon->getType() << std::endl;
	}
	else
		std::cout << this->_name << " attacks with his hands" << std::endl;

}
