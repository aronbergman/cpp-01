/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abergman <abergman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 17:40:11 by abergman          #+#    #+#             */
/*   Updated: 2025/01/13 21:08:53 by abergman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "File.hpp"

int main(int argc, char* argv[])
{
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <string1> <string2>" << std::endl;
        return (1);   
    }
    File file(argv[1]); 
    file.replaceInFile(argv[2], argv[3]);
    return (0);
}

/* Dans ce programme, je crée un fichier qui peut remplacer du texte. Voici comment ça marche :

D'abord, je crée un fichier en lui donnant un nom. Puis j'utilise une fonction 
"replaceInFile" qui fait deux choses : elle cherche un texte précis et le remplace par un autre texte.

Le programme fonctionne en plusieurs étapes simples :

- J'ouvre le fichier pour le lire. Si je n'arrive pas à l'ouvrir, le programme affiche une erreur
- Je crée un nouveau fichier avec le même nom plus ".replace" à la fin
- Je lis le fichier ligne par ligne
- Quand je trouve le texte que je cherche, je le remplace par le nouveau texte
- J'écris le résultat dans le nouveau fichier

Une fois que j'ai fini, je ferme les deux fichiers. */