/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaceAll.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:20:49 by nhimad            #+#    #+#             */
/*   Updated: 2025/04/23 16:34:51 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "replaceAll.hpp"

void replaceAll(std::ifstream &input, std::ofstream &outFile, std::string &s1, std::string &s2) {
	std::string line;
	
	while (std::getline(input, line)) {
		size_t pos = line.find(s1);
		while (pos != std::string::npos && !s1.empty()) {
			std::string strSupstr = line.substr(0, pos);
			outFile << strSupstr;	
			outFile << s2;
			line = line.erase(0, pos + s1.length());
			pos = line.find(s1);		
		}
		outFile << line;
		if (!input.eof())
			outFile << std::endl;
	}
}