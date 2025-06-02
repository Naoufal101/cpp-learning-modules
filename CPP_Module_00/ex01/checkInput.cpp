/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkInput.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 22:21:38 by nhimad            #+#    #+#             */
/*   Updated: 2025/03/19 22:21:39 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phone.hpp"

void checkEof()
{
	if (std::cin.eof()) {
		std::cout << "\nEOF detected. Exiting..." << std::endl;
		exit (0);
	}
}

std::string getValidInput(const std::string &request)
{
	std::string input;

	while (true)
	{
		std::cout << request;
		std::getline(std::cin, input);
        checkEof();
		if (!input.empty() && !isOnlySpaces(input))
			break;
		std::cout << "\n\tIvaled input\n" << std::endl;
	}
	return (input);
}

bool isOnlySpaces(const std::string& str) {
    for (size_t i = 0; i < str.length(); i++) {
        if (!std::isspace(str[i]))
            return false;
    }
    return true;
}

bool isValidNumber(const std::string& phoneNumber) {

    checkEof();
    if (phoneNumber.empty()) return false;
    size_t index = (phoneNumber.at(0) == '+');
    if (index == phoneNumber.length()) return false;
    if (!isnumber(phoneNumber.at(0)) && index == 0) return false;
    for (size_t i = index; i < phoneNumber.length(); i++){
        if (!isnumber(phoneNumber.at(i)))
            return false;
    }
    return true;
}

std::string getValidPhoneNumber(const std::string &request) {
    std::string PhoneBookNumber;
    
    while (true) {
        std::cout << request;
        std::getline(std::cin, PhoneBookNumber);

        if (isValidNumber(PhoneBookNumber))
            return PhoneBookNumber;
        else 
            std::cout << "Invalid input, must contain only digits.\n";
    }
}
