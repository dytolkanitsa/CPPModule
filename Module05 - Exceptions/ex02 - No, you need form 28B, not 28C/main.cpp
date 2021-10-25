#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	try
	{
		std::cout << "_____________srubbery creation_____________" << std::endl;
		{
			ShrubberyCreationForm form("1A");
			Bureaucrat bureaucrat("Vitalya", 1);
			form.beSigned(bureaucrat);
			bureaucrat.executeForm(form);
		}
		std::cout << "_____________robotomy request_____________" << std::endl;
		{
			RobotomyRequestForm form2("1B");
			Bureaucrat bureaucrat2("Mr.Darcy", 1);
			form2.beSigned(bureaucrat2);
			bureaucrat2.executeForm(form2);
		}
		std::cout << "_____________presidental pardon_____________" << std::endl;
		{
			PresidentialPardonForm form3("1C");
			Bureaucrat bureaucrat3("Kolya", 1);	
			form3.beSigned(bureaucrat3);
			bureaucrat3.executeForm(form3);
		}
		std::cout << "_____________bureaucrat grade low for form execute_____________" << std::endl;
		{
			PresidentialPardonForm form4("1D");
			Bureaucrat bureaucrat4("Anton", 1);
			form4.beSigned(bureaucrat4);
			bureaucrat4.executeForm(form4);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}