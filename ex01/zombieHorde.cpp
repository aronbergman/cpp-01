/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abergman <abergman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:51:05 by abergman          #+#    #+#             */
/*   Updated: 2025/01/09 18:30:49 by abergman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0)
    {
        return 0;
    }
    Zombie* horde = new Zombie[N];
    for (int index = 0; index < N; index++)
    {
        horde[index].setName(name);
    }
    return (horde);
}
