/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 18:09:18 by nhimad            #+#    #+#             */
/*   Updated: 2025/04/27 22:23:39 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int					fixedPoint;
		static const int	fractionalBits = 8;
	public:
		//contructors
		Fixed();
		~Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed( const Fixed &fixedPoint );
		
		//operations overload
		Fixed&	operator=(const Fixed& other);
			//comparision
		bool	operator>(const Fixed& other) const;
		bool	operator<(const Fixed& other) const;
		bool	operator>=(const Fixed& other) const;
		bool	operator<=(const Fixed& other) const;
		bool	operator==(const Fixed& other) const;
		bool	operator!=(const Fixed& other) const;
			//arithmetic
		Fixed		operator+(const Fixed& other)  const;
		Fixed		operator-(const Fixed& other) const;
		Fixed		operator*(const Fixed& other) const;
		Fixed		operator/(const Fixed& other) const;
			//increment/decrement operators
		Fixed&	operator++();
		Fixed&	operator--();
		Fixed	operator++(int); // a++
		Fixed	operator--(int); // a--
			//min/max
		static Fixed&	min(Fixed& a, Fixed& b);
		static Fixed&	max(Fixed& a, Fixed& b);
		static const Fixed&	min(const Fixed& a, const Fixed& b);
		static const Fixed&	max(const Fixed& a, const Fixed& b);

		//methods
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);
#endif