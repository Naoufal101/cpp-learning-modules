/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ValueFormatter.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 11:42:32 by nhimad            #+#    #+#             */
/*   Updated: 2025/06/30 20:30:48 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAYAS_HPP
#define DISPLAYAS_HPP

#include <iostream>
#include <sstream>
#include <cmath>
#include <iomanip>

class ValueFormatter {
	private:
		ValueFormatter();
		ValueFormatter(const ValueFormatter& other);
		
	public:
		static void displayChar(const double value);
		static void displayInt(const double value);
		static void displayFloat(const double value);
		static void displayDouble(const double value);
};
#endif

