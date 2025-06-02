/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:33:32 by nhimad            #+#    #+#             */
/*   Updated: 2025/04/27 22:56:52 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float absv(float area) {
    return ((area < 0) ? -area : area);
}

static Fixed area(Point const& p1, Point const& p2, Point const& p3) {
    return Fixed(
        (absv(p1.getX().toFloat() * (p2.getY().toFloat() - p3.getY().toFloat()) +
         p2.getX().toFloat() * (p3.getY().toFloat() - p1.getY().toFloat()) +
         p3.getX().toFloat() * (p1.getY().toFloat() - p2.getY().toFloat()))
        ) / 2.0f
    );
}

bool bsp(const Point& a, const Point& b, const Point& c, const Point& p) {
    Fixed A = area(a, b, c);
    Fixed A1 = area(p, b, c);
    Fixed A2 = area(a, p, c);
    Fixed A3 = area(a, b, p);

    if (A1 == Fixed(0) || A2 == Fixed(0) || A3 == Fixed(0))
        return false;
    return (A == (A1 + A2 + A3));
}
