/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:30:45 by nhimad            #+#    #+#             */
/*   Updated: 2025/07/15 16:10:23 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MutantStack.hpp"

template <typename T>
void display(T it, T ite) {
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
}

template <typename T>
void testIterators (T container) {
	typename T::iterator mit = container.begin();
	typename T::iterator mite = container.end();
	display(mit, mite);

	typename T::reverse_iterator mrit = container.rbegin();
    typename T::reverse_iterator mrite = container.rend();
	display(mrit, mrite);
}

int main()
{
	std::cout << "-----Using the MutantStack \"container\"-----\n";
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	
	mstack.pop();
	std::cout << "MutantStack size: " << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	testIterators (mstack);
	
	std::cout << "-----Using the list \"container\"-----\n";
	std::list<int> list;
	list.push_back(5);
	list.push_back(17);
	std::cout << list.back() << std::endl;
	
	list.pop_back();
	std::cout << "List size: " << list.size() << std::endl;
	
	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);
	testIterators (list);
	return 0;
}