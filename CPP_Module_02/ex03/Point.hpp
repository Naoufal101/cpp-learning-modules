/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 23:04:30 by nhimad            #+#    #+#             */
/*   Updated: 2025/04/27 18:44:27 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#ifndef POINT_HPP
#define POINT_HPP

class Point {
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point();
		Point(const Point& other);
		Point(const float x_init, const float y_init);
		Point& operator=(const Point& other);
		Fixed getX() const;
		Fixed getY() const;
		~Point();
};

bool bsp(const Point& a, const Point& b, const Point& c, const Point& p);

#endif