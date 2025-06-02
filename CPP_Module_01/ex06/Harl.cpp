#include "Harl.hpp"

void Harl::debug() {
    std::cout << "[DEBUG] ba8i mchi l Dar 🏚" << std::endl;
}

void Harl::info() {
    std::cout << "[INFO] wa log time kayssali f 27!" << std::endl;
}

void Harl::warning() {
    std::cout << "[WARNING] i think 5iss yna9sso log time." << std::endl;
}

void Harl::error() {
    std::cout << "[ERROR] waaaa 😱, ba9ili 60 h⏱ bax nssali log time." 
              << std::endl;
}

void Harl::complain(std::string level) {
    int levelIndex = -1;
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	for (int i = 0; i < 4; i++) {
		if (levels[i] == level) {
			levelIndex = i;
			break;
		}
	}
	
	switch (levelIndex)
	{
		case 0: Harl::debug();
		case 1: Harl::info();
		case 2: Harl::warning();
		case 3: Harl::error();
			break;
		default:
       		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
