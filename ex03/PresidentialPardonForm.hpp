/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhimad <nhimad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 18:03:33 by nhimad            #+#    #+#             */
/*   Updated: 2025/05/25 18:05:14 by nhimad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDEFNTIALPARDONFORM_HPP
#define PRESIDEFNTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
private:
    PresidentialPardonForm();
    std::string _target;

public:
    // Constructors and Destructor
    PresidentialPardonForm(const std::string& target);
    PresidentialPardonForm(const PresidentialPardonForm& other);
    PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
    ~PresidentialPardonForm();

    // Accessor
    const std::string& getTarget() const;

    // Execution
    void execute(const Bureaucrat& executor) const;
};

#endif