#include <iostream>
#include <ostream>
#include <sstream>
#include <cstdlib>


typedef std::string string;

class Scalar
{
private :
    double _content;
    Scalar();
public :
    Scalar (string word);
    void asFloat();
    void asInt();
    void asChar();
    void asDouble();
    
};