/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abergman <abergman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 22:35:24 by abergman          #+#    #+#             */
/*   Updated: 2025/03/03 17:34:44 by abergman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>

enum	Types
{
	DEBUG,
	INFO,
	WARNING,
	ERROR,
    INVALID
};

class Harl
{
  private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

  public:
	void complain(Types level, Harl harl);
};

#endif