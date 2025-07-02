/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 14:03:02 by nhimad            #+#    #+#             */
/*   Updated: 2025/06/30 20:42:26 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool ScalarConverter::convert (std::string& str) {
	double value;

	if (str.size() == 1 && !std::isdigit(str.at(0))) {
		value = static_cast<double> (str.at(0));
	}
	else{
		if (str.at(str.size()-1) == 'f' && str != "+inf" && str != "-inf" && str != "inf")
			str.erase(str.size()-1, 1);

		std::istringstream ss(str);
		ss >> value;
		if (ss.fail() || !ss.eof()) {
			std::cout << "Invaled input\n";
			return (false);
		}
	}

	std::cout << std::fixed;
	ValueFormatter::displayChar(value);
	ValueFormatter::displayInt(value);
	ValueFormatter::displayFloat(value);
	ValueFormatter::displayDouble(value);
	return (true);
}