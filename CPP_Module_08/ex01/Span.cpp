/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:41:07 by nhimad            #+#    #+#             */
/*   Updated: 2025/07/15 15:41:08 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : N(n) {};

Span::Span(const Span& other) : N(other.N), v(other.v) {}

Span& Span::operator=(const Span& other) {
    if (this != &other) {
        N = other.N;
        v = other.v;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int number) {
    if (v.size() >= N)
        throw std::out_of_range("error: Span is full!");
    v.push_back(number);
}

typedef std::vector<int>::const_iterator ptr;
int Span::longestSpan() const {
    if (v.size() < 2)
        std::logic_error("error: Not enough elements!");
    std::pair<ptr, ptr> pr = std::minmax_element(v.begin(), v.end());

    ptr min = pr.first;
    ptr max = pr.second;

    return *max - *min;
}

int Span::shortestSpan() const {

    if (v.size() < 2)
        throw std::logic_error("error: Need at least two numbers.");

    //save sorted v in s (sorted vector).
    std::vector<int> s(v);
    sort(s.begin(), s.end());

    int minSpan = INT_MAX;
    for (size_t i = 1; i < v.size(); i++) {
        int diff = s[i] - s[i-1]; 
        if (diff < minSpan)
            minSpan = diff;
    }

    return minSpan;
}

