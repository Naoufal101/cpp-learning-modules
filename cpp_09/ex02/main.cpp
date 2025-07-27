#include "PmergeMe.hpp"
#include <ctime>
#include <iomanip> 

int main(int argc, char** argv) {


    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <positive integers...>" << std::endl;
        return 1;
    }
    
    
    try
    {
        std::vector<int> numbers;
        numbers = parseInput(argc, argv);
        std::deque<int> dq(numbers.begin(), numbers.end());

        std::cout  << "Before:" << std::setw(3);
        vectorDisplay(numbers);

        clock_t t0 = std::clock();
        std::vector<int> sorted = mergeInsertionSort<std::vector<int>>(numbers);
        clock_t t1 = std::clock();
        std::deque<int> sortedDq = mergeInsertionSort<std::deque<int>>(dq);
        clock_t t2 = std::clock();

        double vecTimeUs = double(t1 - t0) / CLOCKS_PER_SEC * 1e6;
        double deqTimeUs = double(t2 - t1) / CLOCKS_PER_SEC * 1e6;
        
        std::cout  << "After:" << std::setw(4); vectorDisplay(sorted);
        std::cout << "Time to process a range of "<< sorted.size() << " elements with std::vector : " << vecTimeUs << " us\n";
        std::cout << "Time to process a range of "<< sortedDq.size() << " elements with std::deque :  " << deqTimeUs << " us\n";

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}