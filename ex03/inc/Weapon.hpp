/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 12:41:09 by hbousset          #+#    #+#             */
/*   Updated: 2025/09/22 13:19:56 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>
class Weapon
{
	private:
		std::string _type;
	public:
		Weapon(const std::string &weapon);
		~Weapon();
		std::string getType() const ;
		void		setType(const std::string &weapon);
};



#endif
