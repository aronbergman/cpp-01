/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abergman <abergman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 17:39:45 by abergman          #+#    #+#             */
/*   Updated: 2025/01/14 00:25:12 by abergman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
#define FILE_HPP

#include <fstream>
#include <string>
#include <iostream>

#define BZISE 1024

class File {
    private:
        std::string filename; // Nom du fichier a traiter
    public:
        File(const std::string& fname); // Constructeur prenant le num du fichier
        void replaceInFile(const std::string& s1, const std::string& s2); // Methode pour remplacer toutes les occurrences de s1 par s2 dans le fichier 
};

#endif
