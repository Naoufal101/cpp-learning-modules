#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

class Span {
    private:
        unsigned int N;
        std::vector<int> v;

    public:
        Span(unsigned int n);
        Span(const Span& other);
        Span& operator=(const Span& other);
        ~Span();

        void addNumber(int number);

        template <typename T>
        void addNumber(T begin, T end) {
            int d = std::distance(begin, end);
            if (d + v.size() > N)
                throw std::length_error("Span capacity exceeded");
            v.insert(v.end(), begin, end);
        }

        int shortestSpan() const;
        int longestSpan() const;
};

#endif
