/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abergman <abergman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 17:39:45 by abergman          #+#    #+#             */
/*   Updated: 2025/01/10 20:51:43 by abergman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
#define FILE_HPP

#include <cstdio>
#include <string>
#include <iostream>

class File {
    private:
        std::string filename;
    public:
        File(const std::string& fname);
        void replaceInFile(const std::string& s1, const std::string& s2);
};

#endif
