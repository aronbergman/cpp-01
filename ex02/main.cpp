/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abergman <abergman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:17:48 by abergman          #+#    #+#             */
/*   Updated: 2024/12/20 17:46:51 by abergman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

//  -References must be initialized when created
//  -References cannot be reassigned to another object
//  -Pointers can be null and can be reassigned
//  -Pointers require explicit dereference (*), references do not

//  Dereferencing is the operation of gaining access to the value pointed to by pointer. For example:
//      int*ptr = &num;     //ptr points to num
//      int value = *ptr;   //dereferencing ptr to get the value num
//  -When using references, dereferencing occurs automatically, which makes the code cleaner and safer

int	main(void)
{
    std::cout << std::endl;
    std::string stringVAR = "HI THIS IS BRAIN";
    
    // The pointer requires the & operator to get the address and * to dereference
    //      -When you need the ability to change the address pointed to by pointer
    //      -When dynamically allocating memory (new, delete)
    //      -When null value support is required
    //      -In cases of polymorphism and inheritance
    std::string* stringPTR = &stringVAR;
    
    // The reference is like an alias -it's automatically dereferenced when accessing the value
    //     -When an object must always refer to something (references cannot be null)
    //     -In function parameters to avoid copying large objects
    //     -When a cleaner and safer syntax is required
    std::string &stringREF = stringVAR;

    // Print memory addresses
    std::cout << "Memory addresses: " << std::endl;
    std::cout << "string VAR: " << &stringVAR << std::endl;
    std::cout << "string PTR: " << stringPTR << std::endl;
    std::cout << "string REF: " << &stringREF << std::endl;

    std::cout << std::endl;

    std::cout << "Values:" << std::endl;
    std::cout << "stringVAR: " << stringVAR << std::endl;
    std::cout << "stringPTR: " << *stringPTR << std::endl;
    std::cout << "stringREF: " << stringREF << std::endl;

    std::cout << std::endl;
	return (0);
}

/* Ce programme explique trois façons simples de stocker des données :

1. Une variable simple (stringVAR) - qui contient directement le texte "HI THIS IS BRAIN"
2. Un pointeur (stringPTR) - qui garde l'adresse où se trouve la variable stringVAR
- On le crée avec le symbole &
- On doit utiliser * pour voir ce qu'il contient
1. Une référence (stringREF) - qui est juste un autre nom pour stringVAR
- Elle est facile à créer
- Elle fonctionne comme une variable normale

Le programme montre trois choses importantes :

1. Où sont stockées ces variables en mémoire
2. Comment lire leur contenu de différentes façons
3. Comment utiliser les pointeurs et les références

À retenir :

- Une référence doit toujours pointer vers quelque chose
- Un pointeur peut ne pointer vers rien (null)
- Les références sont plus sûres à utiliser
- Les pointeurs sont plus flexibles mais il faut faire attention à bien les gérer */