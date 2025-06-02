/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 21:31:36 by nhimad            #+#    #+#             */
/*   Updated: 2025/04/24 15:57:00 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replaceAll.hpp"

int main(int arc, char **arv) {
	if (arc == 4) {
		std::string file = arv[1];
		std::string s1 = arv[2];
		std::string s2 = arv[3];
		
		std::ifstream input(file);
		if (!input.is_open()) {
			std::cerr << "Failed to open file\n";
    		return 1;
		}
		
		std::ofstream outFile((file + ".replace"));
		if (!outFile) {
			std::cerr << "out file creation Failed\n";
			input.close();
    		return 1;
		}
		replaceAll(input, outFile, s1, s2);
		input.close();
		return 0;
	}
	std::cout << "./replace <filename> s1 s2" << std::endl;
}
