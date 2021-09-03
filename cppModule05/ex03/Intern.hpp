#ifndef INTERN_H
#define INTERN_H

# include <iostream>
# include <string>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class	Intern
{
public:
	Intern();
	~Intern();
	Intern(const Intern &copy);
	Intern& operator=(const Intern &other);
	Form*	makeForm(std::string formName, std::string target);
	Form* newPresidentialPardonForm(std::string target);
	Form* newRobotomyRequestForm(std::string target);
	Form* newShrubberyCreationForm(std::string target);

	class ThereIsNoSuchForm : public std::exception
	{
		const char* what() const throw();
	};
};
#endif