/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abergman <abergman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:51:43 by abergman          #+#    #+#             */
/*   Updated: 2025/01/10 15:54:44 by abergman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type)
{}

const std::string& Weapon::getType() const
{
    return(this->type);
}

void Weapon::setType(std::string newType)
{
    this->type = newType;
}
