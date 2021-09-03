#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("SrubberyCreation", 145, 137)
{
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
	*this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this == &other)
		return *this;
	*this = other;
		return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->ifSigned() == false)
		throw Form::isNotSigned();
	if (executor.getGrade() > this->getGradeToExicute())
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Form " << this->target << " execution is successful" << std::endl;
	std::ofstream fileout;

	fileout.open(target + "_srubbery");
	if (!fileout.is_open())
	{
		std::cout << "Could't open file" << std::endl;
	}
	else
	{
		fileout << "          &&& &&  & &&" << std::endl;
		fileout << "      && &\\/&\\|& ()|/ @, &&" << std::endl;
		fileout << "      &\\/(/&/&||/& /_/)_&/_&" << std::endl;
		fileout << "   &() &\\/&|()|/&\\/ '%\" & ()" << std::endl;
		fileout << "  &_\\_&&_\\ |& |&&/&__%_/_& &&" << std::endl;
		fileout << "&&   && & &| &| /& & % ()& /&&" << std::endl;
		fileout << " ()&_---()&\\&\\|&&-&&--%---()~" << std::endl;
		fileout << "     &&     \\|||" << std::endl;
		fileout << "              |||" << std::endl;
		fileout << "              |||" << std::endl;
		fileout << "              |||" << std::endl;
		fileout << "       , -=-~  .-^- _" << std::endl;
		fileout << "              `" << std::endl;
		fileout.close();
	}
}