#include <iostream>
#include <ostream>
#include <sstream>
#include <cstdlib>
#include <cmath>


typedef std::string string;

class Scalar
{
private :
	double _content;
	string _strCpy;
	Scalar();
public :
	Scalar (string word);
	void asFloat();
	void asInt();
	void asChar();
	void asDouble();
	
};