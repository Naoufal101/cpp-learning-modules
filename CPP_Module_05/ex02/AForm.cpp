#include "AForm.hpp"
#include "Bureaucrat.hpp"

// Constructor
AForm::AForm(const std::string& name, int gradeToSign, int gradeToExecute)
    : _name(name), _isSigned(false),
      _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}

// Copy Constructor
AForm::AForm(const AForm& other)
    : _name(other._name), _isSigned(other._isSigned),
      _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {}

// Assignment Operator
AForm& AForm::operator=(const AForm& other) {
    if (this != &other) {
        _isSigned = other._isSigned;
    }
    return *this;
}

// Destructor
AForm::~AForm() {}

// Getters
const std::string& AForm::getName() const {
    return _name;
}

bool AForm::isSigned() const {
    return _isSigned;
}

int AForm::getGradeToSign() const {
    return _gradeToSign;
}

int AForm::getGradeToExecute() const {
    return _gradeToExecute;
}

// beSigned Method
void AForm::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() > _gradeToSign)
        throw GradeTooLowException();
    _isSigned = true;
}

//execution Method checks
void AForm::execute(const Bureaucrat& executor) const {
    if (!isSigned())
        throw FomrNotSignedException();
    if (executor.getGrade() > _gradeToExecute)
        throw GradeTooLowException();
}

// Exception Messages
const char* AForm::GradeTooHighException::what() const throw() {
    return "Form Error: Grade too high";
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "Form Error: Grade too low";
}

const char* AForm::FomrNotSignedException::what() const throw() {
    return "Form Error:  Form is not signed";
}

// Operator Overload
std::ostream& operator<<(std::ostream& os, const AForm& form) {
    os << "Form \"" << form.getName() << "\", Signed: "
       << (form.isSigned() ? "Yes" : "No")
       << ", Grade Required to Sign: " << form.getGradeToSign()
       << ", Grade Required to Execute: " << form.getGradeToExecute()
       << std::endl;
    return os;
}
