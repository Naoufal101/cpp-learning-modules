#include "Form.hpp"
#include "Bureaucrat.hpp"

// Constructor
Form::Form(const std::string& name, int gradeToSign, int gradeToExecute)
    : _name(name), _isSigned(false),
      _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}

// Copy Constructor
Form::Form(const Form& other)
    : _name(other._name), _isSigned(other._isSigned),
      _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {}

// Assignment Operator
Form& Form::operator=(const Form& other) {
    if (this != &other) {
        _isSigned = other._isSigned;
    }
    return *this;
}

// Destructor
Form::~Form() {}

// Getters
const std::string& Form::getName() const {
    return _name;
}

bool Form::isSigned() const {
    return _isSigned;
}

int Form::getGradeToSign() const {
    return _gradeToSign;
}

int Form::getGradeToExecute() const {
    return _gradeToExecute;
}

// beSigned Method
void Form::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() > _gradeToSign)
        throw GradeTooLowException();
    _isSigned = true;
}

// Exception Messages
const char* Form::GradeTooHighException::what() const throw() {
    return "Form error: Grade too high";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Form error: Grade too low";
}

// Operator Overload
std::ostream& operator<<(std::ostream& os, const Form& form) {
    os << "Form \"" << form.getName() << "\", Signed: "
       << (form.isSigned() ? "Yes" : "No")
       << ", Grade Required to Sign: " << form.getGradeToSign()
       << ", Grade Required to Execute: " << form.getGradeToExecute()
       << std::endl;
    return os;
}
