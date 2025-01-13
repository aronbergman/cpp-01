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

/*  When choosing between stack and heap:
-Use stack for small, fixed-size objects with clear scope
-Use heap for large objects or when size is unknown at compile time
-Use heap when object needs to outlive the function where it's created
 */

/*  Lors du choix entre stack et heap :
- Utiliser la pile pour les petits objets de taille fixe avec une portée claire
- Utiliser heap pour les objets de grande taille ou lorsque la taille est inconnue au moment de la compilation
- Utiliser heap lorsque l’objet doit survivre à la fonction où il a été créé
 */

int	main(void)
{
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
