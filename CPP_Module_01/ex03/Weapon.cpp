/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:32:14 by nhimad            #+#    #+#             */
/*   Updated: 2025/04/22 19:38:42 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void	Weapon::setType(std::string type) {
	this->type = type;
}

const std::string& Weapon::getType() {
	return (type);
}

Weapon::Weapon(std::string club) {
	type = club;
}
