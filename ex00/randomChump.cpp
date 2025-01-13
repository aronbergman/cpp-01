/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abergman <abergman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:44:03 by abergman          #+#    #+#             */
/*   Updated: 2025/01/13 14:43:03 by abergman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

// Stack allocation through randomChump
void randomChump(std::string name)
{
    Zombie zombie(name);
    zombie.announce();
}
