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

		void loadDatabase(const std::string& dbFile);
		void displayDb();
};

#endif