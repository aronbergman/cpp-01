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

/* Dans cet exercice, j'ai créé N copies d'une classe. J'ai utilisé 
une boucle for pour appeler la méthode "annonce" sur chaque copie.

Cette méthode affiche le nom du zombie et son numéro à l'écran.
Pour afficher le numéro, je le transforme d'abord de nombre en texte.

J'ai créé ces copies dans le tas (heap), donc je dois utiliser la commande delete[]
pour nettoyer la mémoire. Cette commande supprime toutes les copies créées. */
