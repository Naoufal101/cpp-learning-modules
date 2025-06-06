#include "Bureaucrat.hpp"

// Constructor
Bureaucrat::Bureaucrat(const std::string& name, int grade)
    : _name(name), _grade(grade) {
    if (_grade < 1)
        throw GradeTooHighException();
    else if (_grade > 150)
        throw GradeTooLowException();
}

// Copy Constructor
Bureaucrat::Bureaucrat(const Bureaucrat& other)
    : _name(other._name), _grade(other._grade) {
}

// Assignment Operator
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    if (this != &other) {
        _grade = other._grade;
    }
    return *this;
}

// Destructor
Bureaucrat::~Bureaucrat() {}

// Accessors
const std::string& Bureaucrat::getName() const {
    return _name;
}

int Bureaucrat::getGrade() const {
    return _grade;
}

void Bureaucrat::signForm(AForm& form) const{
    try
    {
        form.beSigned(*this);
        std::cout << getName() << " signed " << form.getName() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << getName() << " couldn’t sign " << form.getName()
                  << ". Because," << e.what() << std::endl; 
    }
}

 void    Bureaucrat::executeForm(AForm const & form) const {
    form.execute(*this);
    std::cout << _name << " executed " << form.getName() << std::endl;
 }

// Grade Modification
void Bureaucrat::incrementGrade() {
    if (_grade <= 1)
        throw GradeTooHighException();
    --_grade;
}

void Bureaucrat::decrementGrade() {
    if (_grade >= 150)
        throw GradeTooLowException();
    ++_grade;
}

// Exception Messages
const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "GradeTooHighException: Grade is too high.";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "GradeTooLowException: Grade is too low.";
}

// Overload of the insertion operator
std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
    return os;
}
