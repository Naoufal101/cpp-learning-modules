/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 22:21:50 by nhimad            #+#    #+#             */
/*   Updated: 2025/03/19 22:21:51 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact {
private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string PhoneBookNumber;
	std::string darkestSecret;

public:
	//setter
	void setFirstName(const std::string &firstName);
	void setLastName(const std::string &lastName);
	void setNickname(const std::string &nickname);
    void setPhoneBookNumber(const std::string &PhoneBookNumber);
    void setDarkestSecret(const std::string &darkestSecret);


	//geter
	std::string getFirstName();
    std::string getLastName();
    std::string getNickname();
    std::string getPhoneBookNumber();
    std::string getDarkestSecret();
};

#endif