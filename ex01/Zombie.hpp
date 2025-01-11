/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abergman <abergman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:43:08 by abergman          #+#    #+#             */
/*   Updated: 2025/01/11 12:41:27 by abergman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cstddef>

class Zombie
{
    private:
        std::string name;
    
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        void announce(void);
        void setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#define RESET   "\033[0m"
#define BLCK   "\033[1m\033[30m"      /* Bold Black */

#endif