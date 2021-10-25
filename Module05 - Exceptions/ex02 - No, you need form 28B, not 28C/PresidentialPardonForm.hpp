#ifndef PRESIDENTIAL_H
# define PRESIDENTIAL_H

# include <iostream>
# include <string>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string target;

public:
	PresidentialPardonForm();
	~PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &copy);
	PresidentialPardonForm& operator=(const PresidentialPardonForm &other);
	void	execute(Bureaucrat const & executor) const;
};

#endif