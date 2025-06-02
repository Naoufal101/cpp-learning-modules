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
    const std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    void (Harl::*actions[])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };

    for (int i = 0; i < 4; ++i) {
        if (levels[i] == level)
            (this->*actions[i])();
    }
}
