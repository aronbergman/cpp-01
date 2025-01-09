/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abergman <abergman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:43:08 by abergman          #+#    #+#             */
/*   Updated: 2025/01/09 16:47:20 by abergman         ###   ########.fr       */
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
        void setIndex(std::string name);
        std::string getIndex();
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#define RESET   "\033[0m"
#define BLCK   "\033[1m\033[30m"      /* Bold Black */
#define RED     "\033[1m\033[31m"      /* Bold Red */
#define GRN   "\033[1m\033[32m"      /* Bold Green */
#define YLLW  "\033[1m\033[33m"      /* Bold Yellow */
#define BLUE    "\033[1m\033[34m"      /* Bold Blue */

#endif