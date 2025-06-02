/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 22:22:18 by nhimad            #+#    #+#             */
/*   Updated: 2025/03/19 22:37:15 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBook_HPP
#define PhoneBook_HPP

#include "Contact.hpp"

class PhoneBook {
	private:
		Contact contacts[9];
		int 	oldestIndex;
		int 	count;
	public:
		PhoneBook();
		Contact 	getContactData();
		void 		addContact(Contact &newContact);
		void 		searchContacts();
		void 		displayContacts(int index);
};

#endif