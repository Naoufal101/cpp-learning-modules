/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 22:22:15 by nhimad            #+#    #+#             */
/*   Updated: 2025/03/19 22:43:54 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phone.hpp"

PhoneBook::PhoneBook() : oldestIndex(0), count(0) {}

Contact PhoneBook::getContactData() {
	std::string input;
	Contact newContact;

	newContact.setFirstName(getValidInput("Enter first name: "));
	newContact.setLastName(getValidInput("Enter last name : "));
	newContact.setNickname(getValidInput("Enter nickname  : "));
	newContact.setPhoneBookNumber(getValidPhoneNumber("Enter PhoneBook number: "));
	newContact.setDarkestSecret(getValidInput("Enter darkest secret  : "));

	return (newContact);
}

void PhoneBook::addContact(Contact &newContact) {
	contacts[oldestIndex] = newContact;
	oldestIndex = (oldestIndex + 1) % 8;
	if (count < 8)
		count++;
}

void PhoneBook::displayContacts(int index) {

	  if (index < 0 || index >= count) {
        std::cout << "\n\t❌ Invalid index!" << std::endl;
        return;
    }
    
    std::cout << "\nFirst Name      : " << contacts[index].getFirstName() << std::endl;
    std::cout << "Last Name       : " << contacts[index].getLastName() << std::endl;
    std::cout << "Nickname        : " << contacts[index].getNickname() << std::endl;
    std::cout << "PhoneBook Number: " << contacts[index].getPhoneBookNumber() << std::endl;
    std::cout << "Darkest Secret  : " << contacts[index].getDarkestSecret() << std::endl;
}

void PhoneBook::searchContacts() {
    if (count == 0) {
        std::cout << "\tPhoneBook is empty." << std::endl;
        return;
    }
    
    std::cout << std::setw(10) << std::endl << "Index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nickname" << "|" << std::endl;
    
    std::cout << std::setfill('-') << std::setw(44) << "" << std::endl;
	std::cout << std::setfill(' ');
    
    for (int i = 0; i < count; i++) {
        std::cout << std::setw(10) << i << "|";
        
        std::string firstName = contacts[i].getFirstName();
        if (firstName.length() > 10)
            firstName = firstName.substr(0, 9) + ".";
        std::cout << std::setw(10) << firstName << "|";
        
        std::string lastName = contacts[i].getLastName();
        if (lastName.length() > 10)
            lastName = lastName.substr(0, 9) + ".";
        std::cout << std::setw(10) << lastName << "|";
        
        std::string nickname = contacts[i].getNickname();
        if (nickname.length() > 10)
            nickname = nickname.substr(0, 9) + ".";
        std::cout << std::setw(10) << nickname << "|" << std::endl;
    }
    std::string input = getValidPhoneNumber("\ncontact index: ");
	displayContacts(atoi(input.c_str()));
}

