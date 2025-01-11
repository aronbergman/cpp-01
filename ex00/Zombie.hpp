/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abergman <abergman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:43:08 by abergman          #+#    #+#             */
/*   Updated: 2025/01/11 12:36:22 by abergman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string name;
    
    public:
        Zombie(std::string name);
        ~Zombie();
        void announce(void);    
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#define RESET   "\033[0m"
#define BLUE    "\033[1m\033[34m"      /* Bold Blue */

#endif