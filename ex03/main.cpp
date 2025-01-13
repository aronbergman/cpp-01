/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abergman <abergman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 17:11:37 by abergman          #+#    #+#             */
/*   Updated: 2025/01/13 21:08:29 by abergman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
/* - HumanA uses a reference to Weapon (always armed) */
/* - HumanA receives weapon in constructor */
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
/* - HumanB uses a pointer to Weapon (can be unarmed) */
/* - HumanB sets weapon after construction */
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return (0);
}

/* 
Dans cet exercice, j'ai créé une classe "humain" de deux façons. Dans la première version,
l'humain reçoit son arme dès sa création. Dans la seconde version, on peut lui donner
 une arme plus tard grâce à une fonction "setWeapon". L'avantage de la deuxième version 
 est que l'humain peut exister et fonctionner même s'il n'a pas d'arme. */
 