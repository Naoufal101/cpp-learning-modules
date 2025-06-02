/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:43:15 by nhimad            #+#    #+#             */
/*   Updated: 2025/04/22 20:25:18 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack() {
	std::cout << name << " attacks with their "
	<< weaponType->getType() << std::endl;
}

HumanB::HumanB(std::string name) : weaponType(NULL){
	this->name = name; 
};

void	HumanB::setWeapon(Weapon &weapon) {
	this->weaponType = &weapon;
}