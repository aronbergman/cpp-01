/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abergman <abergman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:43:14 by abergman          #+#    #+#             */
/*   Updated: 2025/01/06 16:09:31 by abergman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{   
}

Zombie::~Zombie()
{
}

void Zombie::setIndex(string name)
{
    this->name = name;
}

string Zombie::getIndex(void)
{
    return(this->name);
}