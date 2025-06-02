/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:48:49 by nhimad            #+#    #+#             */
/*   Updated: 2025/04/27 21:50:12 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): fixedPoint(0) {
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const int num) {
	std::cout << "Int constructor called" << std::endl;
	
	int scale = 1 << this->fractionalBits;
	this->fixedPoint = num * scale;
}

Fixed::Fixed(const float num) {
	std::cout << "Float constructor called" << std::endl;
	
	int scale = 1 << this->fractionalBits;
	this->fixedPoint = roundf(num * scale);
};
Fixed::~Fixed() {
	std::cout << "Destructor called" <<std::endl;
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	
	if (this != &other) {
		this->fixedPoint = other.getRawBits();
	}

	return *this;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
    out << fixed.toFloat();
    return out;
}

int Fixed::getRawBits( void ) const {
	return this->fixedPoint;
}

void Fixed::setRawBits( int const raw ) {
	this->fixedPoint = raw;
};

float Fixed::toFloat(void) const {
	int scale = 1 << fractionalBits;
	return fixedPoint / (float) scale;
}

int Fixed::toInt(void) const {
	int scale = 1 << fractionalBits;
	return fixedPoint / scale;
}