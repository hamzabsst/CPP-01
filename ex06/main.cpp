/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 14:49:41 by hbousset          #+#    #+#             */
/*   Updated: 2025/09/23 15:08:38 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl harl;

	if (ac >= 2)
		harl.complain(av[1]);
	else
		harl.complain("");
	return 0;
}

