/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 23:09:13 by nhimad            #+#    #+#             */
/*   Updated: 2025/04/27 22:28:18 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() :x(0) , y(0) {}
Point::Point(const float x_init, const float y_init): x(x_init), y(y_init) {}
Point::Point(const Point& other) :x(other.x), y(other.y) {}

Point& Point::operator=(const Point& other) {
	(void) other;
	return *this;
}

Point::~Point(){}

Fixed Point::getX() const { return x; }
Fixed Point::getY() const { return y; }