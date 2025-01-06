/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abergman <abergman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:43:14 by abergman          #+#    #+#             */
/*   Updated: 2025/01/06 15:52:03 by abergman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{   
}

Zombie::~Zombie()
{
}

void Zombie::setIndex(int index)
{
    this->index = index;
}

int Zombie::getIndex(void)
{
    return(this->index);
}