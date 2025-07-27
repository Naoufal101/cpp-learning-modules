#include <iostream>
#include <vector>
#include <sstream>
#include <set>
#include <cstdlib>   // for atoi
#include <cctype>    // for isdigit
#include <stdexcept> // for invalid_argument
#include <deque>


std::vector<int> parseInput(int argc, char** argv);
std::vector<int> mergeInsertionSortVector(const std::vector<int>& input);
void vectorDisplay(const std::vector<int>& vec);
std::vector<int> buildJacobsthal(int p);

template <typename Container>
void splitToTwo(const Container& input,
                Container& main, Container& pend) {
    size_t n = input.size();
    for (size_t i = 0; i + 1 < n; i += 2) {
        int a = input[i], b = input[i + 1];
        if (a > b) { main.push_back(a); pend.push_back(b); }
        else      { main.push_back(b); pend.push_back(a); }
    }
    if (n % 2 != 0) {
        pend.push_back(input[n - 1]);
    }
}

template <typename Container>
Container mergeInsertionSort(const Container& input) {
    const size_t n = input.size();
    if (n <= 1) return input;
    if (n == 2) {
        Container tmp = input;
        if (tmp[0] > tmp[1]) std::swap(tmp[0], tmp[1]);
        return tmp;
    }

    // Split into main chain + pend elements
    Container main, pend;
    splitToTwo(input, main, pend);
    Container sortedMain = mergeInsertionSort(main);

    // Insert pend elements using Jacobsthal order
    size_t p = pend.size();
    if (p == 0) return sortedMain;

    // Build Jacobsthal sequence up to p+1
    std::vector<int> J = buildJacobsthal(p);

    // Insert b1 at front
    auto its = std::lower_bound(sortedMain.begin(), sortedMain.end(), pend[0]);
    sortedMain.insert(its, pend[0]);

    size_t prev = 1;

    for (size_t idx = 1; idx < J.size(); ++idx) {
        size_t cur = J[idx];
        for (size_t k = cur; k > prev; --k) {
            int val = pend[k - 1];
            auto it = std::lower_bound(
                sortedMain.begin(),
                sortedMain.end(),
                val);
            sortedMain.insert(it, val);
        }
        prev = cur;
    }

    for (size_t k = p; k > prev; --k) {
        int val = pend[k - 1];
        auto it = std::lower_bound(sortedMain.begin(), sortedMain.end(), val);
        sortedMain.insert(it, val);
    }

    return sortedMain;
}
