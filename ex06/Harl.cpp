/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abergman <abergman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 22:31:29 by abergman          #+#    #+#             */
/*   Updated: 2025/03/03 17:35:47 by abergman         ###   ########.fr       */
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
void Harl::complain(Types level, Harl harl) {
    switch (level)
    {
        case (DEBUG):
            std::cout << "[ DEBUG ]\n";
            harl.debug();
        case (INFO):
            std::cout << "[ INFO ]\n";
            harl.info();
        case (WARNING):
            std::cout << "[ WARNING ]\n";
            harl.warning();
        case (ERROR):
            std::cout << "[ ERROR ]\n";
            harl.error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]\n";
            break;
    }
}
