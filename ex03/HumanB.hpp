/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abergman <abergman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 17:02:31 by abergman          #+#    #+#             */
/*   Updated: 2025/01/10 17:05:45 by abergman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB {
    private:
        std::string name;
        Weapon* weapon;
    public:
        HumanB(std::string name);
        void setWeapon(Weapon& weapon);
        void attack();
};

#endif
