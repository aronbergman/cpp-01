/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abergman <abergman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:44:08 by abergman          #+#    #+#             */
/*   Updated: 2025/01/13 14:44:15 by abergman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

// Heap allocation through newZombie with word 'new'
Zombie* newZombie(std::string name)
{
    return new Zombie(name);
}
