/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 12:41:09 by hbousset          #+#    #+#             */
/*   Updated: 2025/09/24 15:33:58 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
class Weapon
{
	private:
		std::string _type;
	public:
		Weapon(const std::string &weapon);
		~Weapon();
		std::string getType();
		void		setType(const std::string &weapon);
};

