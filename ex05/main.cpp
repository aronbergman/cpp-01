/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abergman <abergman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 23:33:28 by abergman          #+#    #+#             */
/*   Updated: 2025/01/13 21:09:26 by abergman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
    Harl harl;
    
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("INVALID"); // Should do nothing
    
    return 0;
}

/* Dans l'exercice 05, on crée un programme simple qui gère différents types de messages.
On utilise une classe appelée Harl qui peut afficher quatre types de messages : 
    debug, info, warning et error. Il y a une fonction principale qui choisit 
    quel message afficher selon ce qu'on lui demande.

Voici comment ça marche, étape par étape :

1. On crée une liste qui contient nos différents messages
2. On fait une autre liste avec les noms des types de messages (debug, info, etc.)
3. Quand on veut afficher un message, le programme cherche dans la liste le type demandé
4. Une fois trouvé, il affiche le bon message

Cette façon de faire est pratique car elle évite d'écrire plein de conditions 
"si ceci, alors cela" dans le code. C'est plus simple à comprendre et plus facile à modifier si besoin. */
