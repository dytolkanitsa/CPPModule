#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequest", 72, 45)
{
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
	*this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this == &other)
		return *this;
	*this = other;
		return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->ifSigned() == false)
		throw Form::isNotSigned();
	if (executor.getGrade() > this->getGradeToExicute())
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Form " << this->getName() << " execution is successful" << std::endl;
	int random = rand ();
	if (random % 2 == 0)
		std::cout << this->getName() << "has been robotomized successfully" << std::endl;
	else
		std::cout << this->getName() << "? it’s a failure, bro" << std::endl;
}