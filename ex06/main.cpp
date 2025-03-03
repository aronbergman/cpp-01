/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abergman <abergman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 23:33:28 by abergman          #+#    #+#             */
/*   Updated: 2025/03/03 17:34:32 by abergman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string.h>
#include <iostream>

int	main(int argc, char **argv)
{
	Harl	harl;
	Types	filter = INVALID;

    if (argc < 2)
    {
        std::cout << "Usage: " << argv[0] << " <filter_level>" << "\n";
        return (1);
    }

    std::string input = argv[1];

	if (input == "ERROR") filter = ERROR;
	else if (input == "WARNING") filter = WARNING;
	else if (input == "INFO") filter = INFO;
	else if (input == "DEBUG") filter = DEBUG;
    
	harl.complain(filter, harl);
    
	return (0);
}
