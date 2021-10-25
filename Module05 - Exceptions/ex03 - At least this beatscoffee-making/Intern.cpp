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

Form* Intern::newShrubberyCreationForm(std::string target)
{
	return new ShrubberyCreationForm(target);
}

Form*	Intern::makeForm(std::string formName, std::string target)
{
	std::string names[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};

	Form* ((Intern::*functions[3]))(std::string target);

	functions[1] = &Intern::newRobotomyRequestForm;
	functions[2] = &Intern::newPresidentialPardonForm;
	functions[0] = &Intern::newShrubberyCreationForm;

	int i;
	for (i = 0; i < 3; i++)
	{
		if (formName.compare(names[i]) == 0)
			break ;
	}
	switch (i)
	{
		case 0:
			return (this->*functions[i])(target);
			break;
		case 1:
			return (this->*functions[i])(target);
			break;
		case 2:
			return (this->*functions[i])(target);
			break;
		default:
			throw Intern::ThereIsNoSuchForm();
	}
}

const char* Intern::ThereIsNoSuchForm::what() const throw()
{
	return "There is no such form!!!";
}