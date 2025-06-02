#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "AForm.hpp"

class Bureaucrat {
private:
    const std::string _name;
    int _grade;

public:
    // Constructors and Destructor
    Bureaucrat(const std::string& name, int grade);
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat& operator=(const Bureaucrat& other);
    ~Bureaucrat();

    const   std::string& getName() const;
    int     getGrade() const;

    // Accessors
    void    signForm(AForm& form) const;
    void    executeForm(AForm const & form) const;

    // Grade Modification
    void incrementGrade();
    void decrementGrade();

    // Exception Classes
    class GradeTooHighException : public std::exception {
    public:
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        const char* what() const throw();
    };
};

// Overload of the insertion operator
std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif // BUREAUCRAT_HPP
