#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern &copy)
{
	*this = copy;
}

Intern& Intern::operator=(const Intern &other)
{
	if (this == &other)
		return *this;
	*this = other;
		return *this;
}

Form* Intern::newPresidentialPardonForm(std::string target)
{
	return new PresidentialPardonForm(target);
}

Form* Intern::newRobotomyRequestForm(std::string target)
{
	return new RobotomyRequestForm(target);
}

Form* Intern::newShrubberyCreationForm(std::string target);
{
	return new ShrubberyCreationForm(target);
}

Form*	Intern::makeForm(std::string formName, std::string target)
{
	std::string names[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};

	void Intern::

}

const char* Intern::ThereIsNoSuchForm::what() const throw()
{
	return "There is no such form!!!";
}