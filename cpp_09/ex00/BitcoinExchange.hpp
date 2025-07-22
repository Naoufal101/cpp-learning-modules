/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 15:33:29 by nhimad            #+#    #+#             */
/*   Updated: 2025/07/17 15:51:30 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGES_HPP
#define BITCOINEXCHANGES_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <map>

struct Date {
	int y, m, d;

	bool operator<(const Date& other) const {
		if (y != other.y) return y < other.y;
		if (m != other.m) return m < other.m;
		return d < other.d;

	};

	bool operator==(const Date& other) const {
		return ((y == other.y) && (m == other.m) && (d == other.d));
	};
};

class BitcoinExchange {
	private:
		std::map<Date, float>	data_base;
		Date					date;
		
	public:
		BitcoinExchange() {};
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator=(const BitcoinExchange &other);
		~BitcoinExchange() {};

		typedef std::map<Date, float>::const_iterator const_iterator;

		bool	isValideDate(std::string& date);

		void	loadDatabase(const std::string& filename);
		void	processInput(const std::string& filename);
		void	processLine(const float& value);
		float	getRate();
		void	displayDb();
};

#endif