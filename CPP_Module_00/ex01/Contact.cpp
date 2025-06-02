/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 22:21:42 by nhimad            #+#    #+#             */
/*   Updated: 2025/03/19 22:21:43 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phone.hpp"

void Contact::setFirstName(const std::string &firstName) {
    this->firstName = firstName;
}

void Contact::setLastName(const std::string &lastName) {
    this->lastName = lastName;
}

void Contact::setNickname(const std::string &nickname) {
    this->nickName = nickname;
}

void Contact::setPhoneBookNumber(const std::string &PhoneBookNumber) {
    this->PhoneBookNumber = PhoneBookNumber;
}

void Contact::setDarkestSecret(const std::string &darkestSecret) {
    this->darkestSecret = darkestSecret;
}

std::string Contact::getFirstName() {
    return firstName;
}

std::string Contact::getLastName() {
    return lastName;
}

std::string Contact::getNickname() {
    return nickName;
}

std::string Contact::getPhoneBookNumber() {
    return PhoneBookNumber;
}

std::string Contact::getDarkestSecret() {
    return darkestSecret;
}
