/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbousset <hbousset@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 12:41:14 by hbousset          #+#    #+#             */
/*   Updated: 2025/09/24 15:34:40 by hbousset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	}
	{
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	}
	return 0;
}

// Now, create two classes: HumanA and HumanB. They both have a Weapon and
// a name. They also have a member function attack() that displays (without the angle
// brackets):
// <name> attacks with their <weapon type>
// HumanA and HumanB are almost identical except for these two small details:
// • While HumanA takes the Weapon in its constructor, HumanB does not.
// • HumanB may not always have a weapon, whereas HumanA will always be armed

// HumanA can have a reference or a pointer to the Weapon.
// Ideally, it should be implemented as a reference, since the Weapon exists
// from creation until destruction, and never changes.
// HumanB must have a pointer to a Weapon since the field is not set at
// creation time, and the weapon can be NULL.
