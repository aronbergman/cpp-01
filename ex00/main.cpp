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

void	ft_sigquit_handler(int sig)
{
	(void)sig;
	std::cout << GRN << "\nThe process is killed";
	std::cout << RESET << std::endl;
	_exit(0);
}

int	main(void)
{
	signal(SIGQUIT, ft_sigquit_handler);

	std::cout << std::endl;
	// Stack allocation through randomChump
    std::cout << BLUE << "Testing randomChump (stack allocation):" << RESET << std::endl;
    randomChump("Stack Zombie");
    
    // Heap allocation through newZombie
    std::cout << BLUE << "\nTesting newZombie (heap allocation):" << RESET<< std::endl;
    Zombie* heapZombie = newZombie("Heap Zombie");
    heapZombie->announce();
    
    // Delete heap-allocated zombie
    delete heapZombie;
	return (0);
}
