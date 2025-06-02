/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 19:48:49 by nhimad            #+#    #+#             */
/*   Updated: 2025/04/27 22:56:22 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Constractors
Fixed::Fixed(): fixedPoint(0) {
}

Fixed::Fixed(const int num) {
	int scale = 1 << this->fractionalBits;
	this->fixedPoint = num * scale;
}

Fixed::Fixed(const float num) {
	int scale = 1 << this->fractionalBits;
	this->fixedPoint = roundf(num * scale);
}

Fixed::Fixed(const Fixed &other) {
	fixedPoint = other.getRawBits();
	*this = other;
}

//Destractor:
Fixed::~Fixed() {}

//operations overload
Fixed &Fixed::operator=(const Fixed& other) {
	if (this != &other) {
		this->fixedPoint = other.getRawBits();
	}

	return *this;
}

bool Fixed::operator>(const Fixed& other) const {
    return this->fixedPoint > other.fixedPoint;
}

bool Fixed::operator<(const Fixed& other) const {
    return this->fixedPoint < other.fixedPoint;
}

bool Fixed::operator>=(const Fixed& other) const {
    return this->fixedPoint >= other.fixedPoint;
}

bool Fixed::operator<=(const Fixed& other) const {
    return this->fixedPoint <= other.fixedPoint;
}

bool Fixed::operator==(const Fixed& other) const {
    return this->fixedPoint == other.fixedPoint;
}

bool Fixed::operator!=(const Fixed& other) const {
    return this->fixedPoint != other.fixedPoint;
}

Fixed Fixed::operator+(const Fixed& other) const {
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const {
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const {
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const {
    if (other.toFloat() == 0)
    {
        std::cerr << "Error: Division by zero" << std::endl;
        return Fixed(0);
    }
    return Fixed(this->toFloat() / other.toFloat());
}

Fixed& Fixed::operator++() {
    fixedPoint += 1;
    return *this;
}

Fixed& Fixed::operator--() {
    fixedPoint -= 1;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    fixedPoint += 1;
    return temp;
}

Fixed Fixed::operator--(int) {
    Fixed temp = *this;
    fixedPoint -= 1;
    return temp;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
    out << fixed.toFloat();
    return out;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    return (a > b) ? a : b;
}

//Methods
int Fixed::getRawBits( void ) const {
	return this->fixedPoint;
}

void Fixed::setRawBits( int const raw ) {
	this->fixedPoint = raw;
}

float Fixed::toFloat(void) const {
	int scale = 1 << fractionalBits;
	return fixedPoint / (float) scale;
}

int Fixed::toInt(void) const {
	int scale = 1 << fractionalBits;
	return fixedPoint / scale;
}