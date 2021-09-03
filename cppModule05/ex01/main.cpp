#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat bureaucrat3("Anton", 2);
		bureaucrat3.upGrade();
		std::cout << bureaucrat3;

		// Form firsr_form("firsr_form", 152, 100);
		// Form second_form("second_form", 0, 100); 

		Bureaucrat bureaucrat("Boris", 1);
		Form third_form("third_form", 3, 10);
		bureaucrat.signForm(third_form);
		std::cout << third_form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
	