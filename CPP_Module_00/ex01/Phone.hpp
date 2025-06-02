/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 22:22:11 by nhimad            #+#    #+#             */
/*   Updated: 2025/03/19 22:22:12 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_HPP
#define PHONE_HPP

#include "PhoneBook.hpp"

void checkEof();
bool isValidNumber(const std::string& PhoneBook);
std::string	getValidInput(const std::string &request);
std::string getValidPhoneNumber(const std::string &request);
bool isOnlySpaces(const std::string& str);

#endif