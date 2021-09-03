#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (grade > 150) 
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	*this = copy;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this == &other)
		return *this;
	this->name = other.name;
	this->grade = other.grade;
	return *this;
}

int	Bureaucrat::getGrade(void)
{
	return grade;
}

std::string Bureaucrat::getName(void)
{
	return name;
}

void	Bureaucrat::upGrade(void)
{
	grade--;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::downGrade(void)
{
	grade++;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& out, Bureaucrat &bureaucrat)
{
	return out << "bureaucrat name: " << bureaucrat.getName() 
	<< " grade: " << bureaucrat.getGrade() << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too hight!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low!";
}