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

void BitcoinExchange::loadDatabase(const std::string &filename) {
	std::ifstream dbFile(filename);
	if (!dbFile.is_open())
		throw std::runtime_error("Error: Data base loading failure!");

	std::string line;
	std::getline(dbFile, line);
	while (std::getline(dbFile, line)) {
		std::string date, price;
		std::istringstream iss(line);
		if (!std::getline(iss, date, ',') || !std::getline(iss, price))
			continue;
		data_base[date] = std::strtod(price.c_str(), NULL);
	}
	dbFile.close();
}

float BitcoinExchange::getRate(const std::string& date) {
	const_iterator it = data_base.lower_bound(date);

	if (it != data_base.end() && it->first == date)
		return it->second;
	if (it == data_base.begin())
		throw std::runtime_error("Error: date is too early");
	--it;
	return it->second;	
}

bool	isValideValue(float value) {
	if (value < 0.0f)
		return (std::cerr << "Error: not a positive number." <<std::endl, false);
	if (value > 1000.0f)
		return (std::cerr << "Error: Too much Bitcoin." <<std::endl, false);

	return (true);
}

bool	isValideDate(std::string& date) {
	int year, month, day;
	char sep;

	std::istringstream iss(date);
	if (!(iss >> year >> sep >> month >> sep >> day) || !iss.eof())
		return false;
	if (year <= 0 || month <= 0 || month > 12 || day <= 0 || day >= 31)
		return false;

	return true;
}

void	BitcoinExchange::processLine(const std::string& date, const float& value) {
	
	std::cout << date << " => " << value << " = " << value * getRate(date);
	std::cout << std::endl;
}

void	BitcoinExchange::processInput(const std::string& filename) {
	std::ifstream inFile(filename);
	if (!inFile.is_open())
		throw std::runtime_error("Error: could not open file.");

	std::string line;
	std::getline(inFile, line);
	while (std::getline(inFile, line)) {
		std::istringstream iss(line);
		std::string date, sep;
		float value;

		if (!(iss >> date >> sep >> value) || sep != "|" || !iss.eof() )  {
            std::cerr << "Error: bad format => " << line << "\n";
            continue;
        }

		if (!isValideDate(date)) {
            std::cerr << "Error: bad input => " << line << "\n";
            continue;
        }
		if (!isValideValue(value))
			continue;

		processLine(date, value);
	}
	inFile.close();
}

void BitcoinExchange::displayDb() {
	for (const_iterator it = data_base.begin();
		 it != data_base.end(); it++)
		 std::cout << it->first << " " << it->second << std::endl;
}