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
#include <map>

class BitcoinExchange {
	private:
		std::map<std::string, float> data_base;
		
	public:
		BitcoinExchange() {};
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator=(const BitcoinExchange &other);
		~BitcoinExchange() {};

		typedef std::map<std::string, float>::const_iterator const_iterator;

		void	loadDatabase(const std::string& filename);
		void	processInput(const std::string& filename);
		void	processLine(const std::string& date, const float& value);
		float	getRate(const std::string& str);
		void	displayDb();
};

#endif