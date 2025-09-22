/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 12:41:12 by hbousset          #+#    #+#             */
/*   Updated: 2025/09/22 13:40:31 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string Weapon::getType()
{
	return (_type);
}

void Weapon::setType(const std::string &weapon)
{
	_type = weapon;
}

Weapon::Weapon(const std::string &weapon)
{
	Weapon::setType(weapon);
}
Weapon::~Weapon()
{
	std::cout << this->getType() << " dropped." << std::endl;
}
