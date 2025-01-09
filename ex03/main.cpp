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

int	main(void)
{
    std::cout << std::endl;
    std::string stringVAR = "HI THIS IS BRAIN";
    std::string* stringPTR = &stringVAR;
    std::string& stringREF = stringVAR;

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
