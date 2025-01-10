/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abergman <abergman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 17:39:49 by abergman          #+#    #+#             */
/*   Updated: 2025/01/10 20:51:02 by abergman         ###   ########.fr       */
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
    std::string outFilename = filename + ".replace";
    FILE* outFile = fopen(outFilename.c_str(), "w");
    if (!outFile)
    {
        std::cerr << "Error: \nCannot create o;utput file " << std::endl;
        fclose(inFile);
        return;
    }
    char buffer[1024];
    std::string line;
    while (fgets(buffer, sizeof(buffer), inFile))
    {
        line = buffer;
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
            pos += s2.length();
        }
        fputs(line.c_str(), outFile);
    }
    fclose(inFile);
    fclose(outFile);
}
