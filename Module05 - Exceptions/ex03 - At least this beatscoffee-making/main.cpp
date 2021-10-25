#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
	try
	{
		Intern someRandomIntern;
		Bureaucrat bureaucrat("Anton", 4);
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		bureaucrat.signForm(*rrf);
		bureaucrat.executeForm(*rrf);
		// Form* rrf_2;
		// rrf_2 = someRandomIntern.makeForm("make some noise", "Gerarg");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}