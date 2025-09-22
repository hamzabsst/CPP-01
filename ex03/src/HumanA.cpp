/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 12:41:23 by hbousset          #+#    #+#             */
/*   Updated: 2025/09/22 13:41:28 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):_weapon(weapon)
{
	this->_name = name;
}

void HumanA::attack()
{
	std::cout << this->_name << " attacks with " << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << this->_name << " died." << std::endl;
}
