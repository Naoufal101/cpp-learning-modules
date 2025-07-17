#include "BitcoinExchange.hpp"

int main() {
	BitcoinExchange btc;

	btc.loadDatabase("../djb.csv");
	btc.displayDb();
}