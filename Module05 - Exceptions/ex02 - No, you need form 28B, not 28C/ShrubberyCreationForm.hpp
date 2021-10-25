#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include <iostream>
# include <string>
# include <fstream>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string target;

public:
	ShrubberyCreationForm();
	~ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &copy);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm &other);
	void	execute(Bureaucrat const & executor) const;
};
#endif