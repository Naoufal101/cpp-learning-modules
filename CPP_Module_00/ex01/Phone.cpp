/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phone.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 22:22:02 by nhimad            #+#    #+#             */
/*   Updated: 2025/03/19 22:22:03 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phone.hpp"

int main()
{
	std::string command;
	PhoneBook PhoneBook;
	Contact newContact;

	while (true)
	{
		std::cout	<< "\n📞 PhoneBook - Choose a command:\n"
					<< "  📌 ADD    - Add a new contact\n"
					<< "  🔍 SEARCH - View contacts\n"
					<< "  🚪 EXIT   - Quit the program\n\n";
		std::cout << "Enter command: ";
		std::getline(std::cin, command);
		checkEof();
		if (command == "ADD") {
			newContact = PhoneBook.getContactData();
			PhoneBook.addContact(newContact);
		}
		else if (command == "SEARCH") {
			PhoneBook.searchContacts();
		}
		else if (command == "EXIT")
			break;
		else
			std::cout << "\n\tInvaled Command 🤪!" << std::endl;
	}
}
