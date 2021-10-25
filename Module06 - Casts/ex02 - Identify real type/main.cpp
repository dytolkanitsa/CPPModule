#include <iostream>

class Base
{
public:
	virtual ~Base(){};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base* generate(void)
{
	int random = rand();
	if (random % 3 == 0)
	{
		std::cout << "generated A" << std::endl;
		return new A();
	}
	else if (random % 3 == 1)
	{
		std::cout << "generated B" << std::endl;
		return new B();
	}
	else
	{
		std::cout << "generated C" << std::endl;
		return new C();
	}
}

void identify(Base* p)
{
	std::cout << "generated class is ";
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	std::cout << "generated class is ";
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch (const std::exception& ex)
	{
	}

	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch (const std::exception& ex)
	{
	}

	try
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch (const std::exception& ex)
	{
	}
}

int	main(void)
{
	srand(time(0));
	Base *base = generate();
	identify(base);
	identify(*base);
}