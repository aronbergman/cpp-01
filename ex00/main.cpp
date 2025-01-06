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

#include "Zombie.hpp"
#include <csignal>
#include <limits>

void	ft_sigquit_handler(int sig)
{
	(void)sig;
	std::cout << GRN << "\nThe process is killed";
	std::cout << RESET << std::endl;
	_exit(0);
}

int	main(void)
{
	PhoneBook	phonebook;
	Contact		contact;

	std::string input;
	signal(SIGQUIT, ft_sigquit_handler);
	while (input != "3")
	{
		std::cout << BLUE << "Enter a number of command for continue\n" << RESET;
		std::cout << "(Add: " << BLCK << "1" << RESET;
		std::cout << "; Search: " << BLCK << "2" << RESET;
		std::cout << "; Exit: " << BLCK << "3" << RESET << ") ";
		std::getline(std::cin, input);
		if (input == "1")
			phonebook.addContact();
		if (input == "2")
			phonebook.searchContact();
		if (std::cin.eof())
		{
			std::cout << '\n';
			break ;
		}
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			return (0);
		}
	}
	return (0);
}
