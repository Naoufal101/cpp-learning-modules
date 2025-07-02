/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ValueFormatter.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 12:12:13 by nhimad            #+#    #+#             */
/*   Updated: 2025/06/30 20:50:42 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ValueFormatter.hpp"

void ValueFormatter::displayChar(const double value)
{
	std::cout << "char: ";
	if (std::isnan(value) || std::isinf(value) || 
	value < std::numeric_limits<char>::min() ||
	value > std::numeric_limits<char>::max())
		std::cout << "impossible\n";
	
	else if (!isprint(static_cast<char>(value)))
		std::cout << "Non displayable\n";
	else
		std::cout << "'" << static_cast<char>(value) << "'\n";
}

void ValueFormatter::displayInt(const double value) {
	std::cout << "int: ";
	if (value > std::numeric_limits<int>::max() ||
		value < -std::numeric_limits<int>::min() || value != value)
		std::cout <<  "impossible" << std::endl;
	else
		std::cout << static_cast<int> (value) << std::endl;
}

void ValueFormatter::displayFloat(const double value) {
	std::cout << std::setprecision(((std::floor(value) == value) ? 1 : 4 ));
	std::cout << "float: " << static_cast<float> (value) << "f"<< std::endl;
}

void ValueFormatter::displayDouble(const double value) {
	std::cout << std::setprecision(((std::floor(value) == value) ? 1 : 4 ));
	std::cout << "double: " << static_cast<double> (value) << std::endl;
}