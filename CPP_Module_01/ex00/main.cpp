/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 15:55:56 by nhimad            #+#    #+#             */
/*   Updated: 2025/04/24 14:58:17 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
int main () {
	Zombie ZOOOZO("ZooZ");
	ZOOOZO.announce();
	
	Zombie *zoz = NULL;
	zoz = newZombie("dead");
	zoz->announce();
	
	randomChump("HUG");
	delete zoz;
}