#include "Base.hpp"

Base :: ~Base()
{

}

Base *generate()
{
	std::srand(std::time(nullptr));
	switch (std::rand() % 3 + 1)
	{
		case 1:
			return (new A);
		case 2:
			return (new B);
		case 3:
			return (new C);
	}
	return (nullptr);
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "unknown type" << std::endl;
}

void identify(Base &p)
{
	if (dynamic_cast<A*>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "C" << std::endl;
	else
		std::cout << "unknown type" << std::endl;
}