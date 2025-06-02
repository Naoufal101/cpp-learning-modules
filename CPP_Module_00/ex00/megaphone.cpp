/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 22:21:23 by nhimad            #+#    #+#             */
/*   Updated: 2025/03/19 22:21:24 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv){
	if (argc == 1)
		std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else {
		std::string str;
		for (int i = 1; i < argc; i++){
			str = argv[i];
			for ( size_t j = 0; j < str.length(); j++){
				str[j] = std::toupper(str[j]);
			}
			std::cout << str;
		}
	}
	std::cout << std::endl;
}
