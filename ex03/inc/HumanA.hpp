/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 12:41:21 by hbousset          #+#    #+#             */
/*   Updated: 2025/09/24 16:29:23 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA
{
	private:
		std::string	_name;
		Weapon		&_weapon;
	public:
		HumanA();
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void attack();
};

