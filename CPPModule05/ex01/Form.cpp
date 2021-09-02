#include "Form.hpp"

Form::Form() : name("name"), isSigned(false) ,gradeToSign(100), gradeToExicute(100)
{
}

Form::~Form()
{
}

Form::Form(std::string name, int const gradeToSign, int const gradeToExicute) :
	name(name), isSigned(false) ,gradeToSign(gradeToSign), gradeToExicute(gradeToExicute)
{
	if (gradeToSign > 150 || gradeToExicute > 150)
		throw Form::GradeTooLowException();
	else if (gradeToSign < 1 || gradeToExicute < 1)
		throw Form::GradeTooHighException();
}

Form::Form(const Form &copy) : 
	name(copy.getName()), isSigned(copy.isSigned),
	gradeToSign(copy.getGradeToSign()), 
	gradeToExicute(copy.getGradeToExicute())
{
	*this = copy;
}

Form& Form::operator=(const Form &other)
{
	if (this == &other)
		return *this;
	*this = other;
		return *this;
}

std::string Form::getName(void) const
{
	return name;
}

int	Form::getGradeToSign(void) const
{
	return gradeToSign;
}

int	Form::getGradeToExicute(void) const
{
	return gradeToExicute;
}

bool	Form::ifSigned(void)
{
	return isSigned;
}

void	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (gradeToSign >= bureaucrat.getGrade())
		isSigned = true;
	else
		throw Bureaucrat::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Form grade too hight!";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Form grade too low!";
}

std::ostream& operator<<(std::ostream& out, Form &form)
{
	return out << "form name " << form.getName() << " grade: " << form.ifSigned()
	<< " grade to sign: " << form.getGradeToSign() << " grade to execute: " << form.getGradeToExicute() << std::endl;
}