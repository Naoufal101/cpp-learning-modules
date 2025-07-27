#include "PmergeMe.hpp"

std::vector<int> parseInput(int argc, char** argv) {
    std::set<int> seen;
    std::vector<int> result;

    for (int i = 1; i < argc; ++i) {
        std::istringstream token(argv[i]);
        int num;

        if (!(token >> num) || !token.eof() || num < 0)
            throw std::invalid_argument("Invalid argument: " +  token.str());

        if (seen.insert(num).second)
            result.push_back(num);
    }

    return result;
}

void vectorDisplay(const std::vector<int>& vec) {
    for (const auto& n : vec) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
}

// 2. splitToTwo: correct pairing & leftover to pend
void splitToTwo(const std::vector<int>& input,
                std::vector<int>& main, std::vector<int>& pend) {
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

// 3. buildJacobsthal up to p+1
std::vector<int> buildJacobsthal(int p) {
    std::vector<int> J;
    J.push_back(0);
    J.push_back(1);
    while (p > 1) {
        int sz = J.size();
        int nxt = J[sz - 1] + 2 * J[sz - 2];
        if (nxt > p) break;
        J.push_back(nxt);
    }
    return J;
}

// 4. insertPendElements using Jacobsthal-guided batches
static std::vector<int> insertPendElements(std::vector<int> S,
                                           const std::vector<int>& B) {
    size_t p = B.size();
    if (p == 0) return S;
    
    auto its = std::lower_bound(S.begin(), S.end(), B[0]);
    S.insert(its, B[0]);

    std::vector<int> J = buildJacobsthal(p);
    size_t prev = 1;
    for (size_t idx = 1; idx < J.size(); ++idx) {
        size_t cur = J[idx];
        for (size_t k = cur; k > prev; --k) {
            int val = B[k - 1];
            auto it = std::lower_bound(S.begin(),
                                       S.end(),
                                       val);
            S.insert(it, val);
        }
        prev = cur;
    }
    for (size_t k = p; k > prev; --k) {
        int val = B[k - 1];
        auto it = std::lower_bound(S.begin(), S.end(), val);
        S.insert(it, val);
    }
    return S;
}

// 5. Vector-only mergeInsertionSort
std::vector<int> mergeInsertionSortVector(const std::vector<int>& input) {
    size_t n = input.size();
    if (n <= 1) return input;
    if (n == 2) {
        std::vector<int> tmp = input;
        if (tmp[0] > tmp[1]) std::swap(tmp[0], tmp[1]);
        return tmp;
    }
    std::vector<int> main, pend;
    splitToTwo(input, main, pend);
    std::vector<int> sortedMain = mergeInsertionSortVector(main);

    return insertPendElements(sortedMain, pend);
}
