#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>

// Constructors and Destructor
ShrubberyCreationForm::ShrubberyCreationForm()
    : AForm("ShrubberyCreationForm", 145, 137), _target("default") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : AForm(other), _target(other._target) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
    if (this != &other) {
        AForm::operator=(other);
        _target = other._target;
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

// Accessor
const std::string& ShrubberyCreationForm::getTarget() const {
    return _target;
}

// Execution
void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
    // Check if the form is signed and if the executor has the required grade
    AForm::execute(executor);

    // Create and write to the file
    std::ofstream ofs(_target + "_shrubbery");
    if (!ofs)
        throw std::ios_base::failure("Failed to open file");

    ofs << "       _-_\n"
           "    /~~   ~~\\\n"
           " /~~         ~~\\\n"
           "{               }\n"
           " \\  _-     -_  /\n"
           "   ~  \\\\ //  ~\n"
           "_- -   | | _- _\n"
           "  _ -  | |   -_\n"
           "      // \\\\\n";

    ofs.close();
}
