#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardont", 25, 5)
{
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
{
	*this = copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	if (this == &other)
		return *this;
	*this = other;
		return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->ifSigned() == false)
		throw Form::isNotSigned();
	if (executor.getGrade() > this->getGradeToExicute())
		throw Bureaucrat::GradeTooLowException();
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}