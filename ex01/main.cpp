/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abergman <abergman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:17:48 by abergman          #+#    #+#             */
/*   Updated: 2024/12/20 17:46:51 by abergman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <csignal>
#include <limits>

int	main(void)
{
    int N;
    
    N = 7;
    Zombie* horde = zombieHorde(N, "Horde Zombie");

    // Make all zombies announce themselves
    for (int index = 0; index < N; index++)
    {
        std::cout << BLCK << "Zombie [index " << index << "]: " << RESET;
        horde[index].announce();
    }

    // Delete the entire horde
    delete[] horde;
	return (0);
}
