#include "Base.hpp"

int main()
{
	Base *base = generate();
	if (!base)
		return (1);
	identify(base);
	identify(*base);
	delete base;
}