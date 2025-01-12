/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abergman <abergman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 17:39:49 by abergman          #+#    #+#             */
/*   Updated: 2025/01/12 23:16:45 by abergman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

File::File(const std::string& fname): filename(fname) {}

void File::replaceInFile(const std::string& s1, const std::string& s2)
{
    FILE* inFile = fopen(filename.c_str(), "r");
    if (!inFile)
    {
        std::cerr << "Error: \nCannot open input file" << std::endl;
        return;
    }
    
    // Cree le fichier de sortie avec extension .replace
    std::string outFilename = filename + ".replace";
    FILE* outFile = fopen(outFilename.c_str(), "w");
    if (!outFile)
    {
        std::cerr << "Error: \nCannot create o;utput file " << std::endl;
        fclose(inFile);
        return;
    }

    // Lecture et traitement ligne par ligne
    char buffer[BZISE];     // Buffer pour lire le fichier 
    std::string line;       // Ligne courante en cours de traitement
    while (fgets(buffer, sizeof(buffer), inFile))
    {
        line = buffer;
        size_t pos = 0;
        // Remplace toutes les occurrences de s1 par s2 dans la ligne
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
            pos += s2.length();
        }
        fputs(line.c_str(), outFile);       // Ecrit la ligne modifiee
    }
    fclose(inFile); // Ferme les fichiers
    fclose(outFile);
}
