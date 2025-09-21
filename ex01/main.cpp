/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 18:43:43 by hbousset          #+#    #+#             */
/*   Updated: 2025/09/21 21:27:30 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N = 10;
	Zombie *horde = zombieHorde(N, "hipo");
	for (int i = 0; i < N; i++)
	{
		horde->announce();
	}
	delete horde;
	return 0;
}
