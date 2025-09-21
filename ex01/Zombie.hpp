/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 18:44:03 by hbousset          #+#    #+#             */
/*   Updated: 2025/09/21 21:28:04 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Zombie_HPP
# define Zombie_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(int N);
		~Zombie(void);
		void announce(void);
		void setName(std::string name);
};
Zombie	*zombieHorde(int N, std::string name);

#endif
