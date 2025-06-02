#ifndef FORM_HPP
#define FORM_HPP

#include "iostream"

class Bureaucrat;
class Form {
    private:
        const std::string _name;
        bool _isSigned;
        const int _gradeToSign;
        const int _gradeToExecute;
        
    public:
        // Constructors and Destructor
        Form(const std::string& name, int gradeToSign, int gradeToExecute);
        Form(const Form& other);
        Form& operator=(const Form& other);
        ~Form();

        // Getters
        const std::string& getName() const;
        bool isSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;

        // Member Functions
        void beSigned(const Bureaucrat& bureaucrat);

        // Exception Classes
        class GradeTooHighException : public std::exception {
        public:
            virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
        public:
            virtual const char* what() const throw();
        };
};

// Operator Overload
std::ostream& operator<<(std::ostream& os, const Form& form);

#endif
