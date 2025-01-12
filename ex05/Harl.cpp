/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abergman <abergman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 22:31:29 by abergman          #+#    #+#             */
/*   Updated: 2025/01/12 23:24:08 by abergman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Inclusion des en-têtes nécessaires
#include "Harl.hpp"
#include <iostream>

// Méthode debug - Affiche un message de débogage humoristique
void Harl::debug(void) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special"
              << "ketchup burger. I really do!" << std::endl;
}

// Méthode info
void Harl::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put "
              << "enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

// Méthode warning
void Harl::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for "
              << "years whereas you started working here since last month." << std::endl;
}

// Méthode error - Affiche un message d'erreur critique
void Harl::error(void) {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

// Méthode complain - Gère les plaintes selon le niveau spécifié
void Harl::complain(std::string level) {
    // Tableau de pointeurs sur les méthodes membres
    void (Harl::*complaints[4])(void) = {
        &Harl::debug,       // Pointeur vers la méthode debug
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    // Tableau des niveaux de plainte correspondants
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    // Parcourt les niveaux pour trouver la correspondance
    for (int i = 0; i < 4; i++) {
        if (level == levels[i])
            (this->*complaints[i])();       // Appelle la méthode correspondante
    }
}
