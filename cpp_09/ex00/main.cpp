#include "BitcoinExchange.hpp"

int main(int arc, char **argv) {
	BitcoinExchange btc;
	std::string inFile;

	if (arc == 1)
		inFile = "";
	else
		inFile = argv[1];
	try {
		btc.loadDatabase("../data.csv");
		btc.processInput(inFile);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}