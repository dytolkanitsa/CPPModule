#ifndef FORM_H
# define FORM_H

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	std::string const name;
	bool	isSigned;
	int const		gradeToSign;
	int const		gradeToExicute;

public:
	Form();
	~Form();
	Form(std::string name, int const gradeToSign, int const gradeToExicute);
	Form(const Form &copy);
	Form& operator=(const Form &other);
	std::string getName(void) const;
	int	getGradeToSign(void) const;
	int	getGradeToExicute(void) const;
	bool	ifSigned(void) const;
	void	beSigned(Bureaucrat &bureaucrat);
	virtual void execute(Bureaucrat const & executor) const = 0;

	class GradeTooHighException : public std::exception
	{
		const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		const char* what() const throw();
	};

	class isNotSigned : public std::exception
	{
		const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& out, Form &form);

#endif