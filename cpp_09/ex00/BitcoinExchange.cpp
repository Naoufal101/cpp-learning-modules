/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:40:04 by nhimad            #+#    #+#             */
/*   Updated: 2025/07/17 16:05:02 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) {
	*this = other;	
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other) {
	if (this != &other)
		data_base = other.data_base;
	return *this;
}

void BitcoinExchange::loadDatabase(const std::string &dbfile) {
	std::ifstream dataBase(dbfile);
	if (!dataBase.is_open())
		throw std::runtime_error("[KO] Data base loading failure! \n");

	std::string line;
	std::getline(dataBase, line);
	while (std::getline(dataBase, line)) {
		std::string date, price;
		std::istringstream iss(line);
		if (!std::getline(iss, date, ',') || !std::getline(iss, price))
			continue;
		data_base[date] = std::strtod(price.c_str(), NULL);
	}
}

void BitcoinExchange::displayDb() {
	for (std::map<std::string, float>::const_iterator it = data_base.begin();
		 it != data_base.end(); it++)
		 std::cout << it->first << " " << it->second << std::endl;
}