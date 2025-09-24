/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 21:01:49 by hbousset          #+#    #+#             */
/*   Updated: 2025/09/24 16:11:23 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *horde = new (std::nothrow) Zombie[N];
	if (!horde)
		return NULL;
	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	return (horde);
}
