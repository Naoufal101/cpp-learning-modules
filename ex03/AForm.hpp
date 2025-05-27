#ifndef AFORM_HPP
#define AFORM_HPP

#include "iostream"

class Bureaucrat;

class AForm {
private:
    const std::string _name;
    bool _isSigned;
    const int _gradeToSign;
    const int _gradeToExecute;

public:
    // Constructors and Destructor
    AForm(const std::string& name, int gradeToSign, int gradeToExecute);
    AForm(const AForm& other);
    AForm& operator=(const AForm& other);
    virtual ~AForm();

    // Getters
    const std::string& getName() const;
    bool isSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;

    // Member Functions
    void beSigned(const Bureaucrat& bureaucrat);
    virtual void execute(const Bureaucrat& executor) const = 0;

    // Exception Classes
    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };

    class FomrNotSignedException : public std::exception {
    public:
        virtual const char * what() const throw();
    };
};

// Operator Overload
std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif
