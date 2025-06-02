/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 20:16:06 by nhimad            #+#    #+#             */
/*   Updated: 2025/04/24 15:46:46 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int main() {
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Address of str variable:    " << &str << std::endl;
    std::cout << "Address held by stringPTR:  " << stringPTR  << std::endl;
    std::cout << "Address held by stringREF:  " << &stringREF<< std::endl;

    std::cout << "\nValue of the string:           " << str << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF: " << stringREF  << std::endl;
}
