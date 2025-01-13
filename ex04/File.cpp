/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abergman <abergman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 17:39:49 by abergman          #+#    #+#             */
/*   Updated: 2025/01/14 00:23:13 by abergman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"
#include <fstream>

File::File(const std::string& fname): filename(fname) {}

void File::replaceInFile(const std::string& s1, const std::string& s2)
{
    std::ifstream inFile(filename.c_str());
    if (!inFile.is_open()) {
        std::cerr << "Error: Cannot open input file" << std::endl;
        return;
    }

    std::string outFilename = filename + ".replace";
    std::ofstream outFile(outFilename.c_str());
    if (!outFile.is_open()) {
        std::cerr << "Error: Cannot create output file" << std::endl;
        return;
    }

    std::string content;
    std::string line;
    while (std::getline(inFile, line)) {
        content += line;
        if (!inFile.eof())
            content += "\n";
    }

    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos) {
        content = content.substr(0, pos) + s2 + content.substr(pos + s1.length());
        pos += s2.length();
    }

    outFile << content;
    inFile.close();
    outFile.close();
}
