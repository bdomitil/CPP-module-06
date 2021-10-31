#include "Scalar.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "One parameter acceptable" << std::endl;
		return (1);
	}
	Scalar sc(argv[1]);
	sc.asChar();
	sc.asInt();
	sc.asFloat();
	sc.asDouble();

}