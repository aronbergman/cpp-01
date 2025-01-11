/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abergman <abergman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:43:14 by abergman          #+#    #+#             */
/*   Updated: 2025/01/11 12:41:07 by abergman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* C'est la liste d'initialisation qui initialise l'attribut privé 'name'  */
/* de la classe avec la valeur du paramètre 'name' */

Zombie::Zombie(std::string name) : name(name)
{   
}

Zombie::Zombie() : name("")
{}

Zombie::~Zombie()
{
    std::cout << this->name << " is destroyed" << std::endl;
}

void Zombie::setName(std::string name)
{
   this->name = name;
}

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
