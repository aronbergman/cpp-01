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
#include <sstream>

int	main(void)
{
    int N;
    
    N = 7;
    Zombie* horde = zombieHorde(N, "One of Horde Zombie");

    // Make all zombies announce themselves
    for (int index = 0; index < N; index++)
    {
        horde[index].announce();
    }

    std::cout << std::endl;
    
    // Delete the entire horde
    delete[] horde;
	return (0);
}
