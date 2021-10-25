#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat first_bureaucrat("Arsenyi", 179); //create with less than 150 grade
		Bureaucrat second_bureaucrat("Kirill", 30); //create with more than 1 grade
		
		Bureaucrat third_bureaucrat("Anton", 60); //check up grade 
		std::cout << third_bureaucrat;
		third_bureaucrat.upGrade();
		std::cout << third_bureaucrat;

		Bureaucrat fourth_bureaucrat("Sasha", 149); //check down grade 
		std::cout << fourth_bureaucrat;
		fourth_bureaucrat.downGrade();
		std::cout << fourth_bureaucrat;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
	