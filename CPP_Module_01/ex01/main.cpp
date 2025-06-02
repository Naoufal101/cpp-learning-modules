/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 15:55:56 by nhimad            #+#    #+#             */
/*   Updated: 2025/04/24 16:09:48 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
int main () {
	int N = 0;
	std::string name;

	std::cout << "Now enter group's name: ";
	std::cin >> name;
	std::cout << "Enter the Number of zombies :";
	std::cin >> N;
	if (N <= 0)
		return (1);
	
	Zombie *Z = zombieHorde(N, name);
	for (int i = 0; i < N; ++i) {
		Z[i].announce();
	}
	delete [] Z;
}