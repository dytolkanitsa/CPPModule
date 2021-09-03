#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <string>
# include "Form.hpp"

class	Form;

class Bureaucrat
{
private:
	std::string name;
	int	grade;

public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &copy);
	Bureaucrat& operator=(const Bureaucrat &other);
	int	getGrade(void);
	std::string getName(void);
	void	upGrade(void);
	void	downGrade(void);
	void	signForm(Form &form);

	class GradeTooHighException : public std::exception
	{
		const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& out, Bureaucrat &bureaucrat);

#endif