/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abergman <abergman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:51:05 by abergman          #+#    #+#             */
/*   Updated: 2025/01/12 22:38:17 by abergman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"
#include <sstream>

Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0)
    {
        return 0;
    }
    
    // Heap allocation for zombies
    Zombie* horde = new Zombie[N];
    for (int index = 0; index < N; index++)
    {
        // For casting int to string format
        std::stringstream ss;
        ss << index;
        std::string str = ss.str();
        horde[index].setName(name + " " + str);
    }
    return (horde);
}
