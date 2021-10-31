#include "Scalar.hpp"

Scalar :: Scalar(string word) 
{
    std::stringstream stream;
    stream << word;
    stream >> _content;
}

void Scalar :: asInt()
{
    int x;
    x = static_cast<int>(_content);
    std::cout << "as int : ";
        std::cout << x << std::endl;
}

void Scalar :: asFloat()
{
    float x = static_cast<float>(_content);
    std::cout << "as float : ";
        std::cout << x << std::endl;
}

void Scalar :: asDouble()
{
    double x = static_cast<double>(_content);
    std::cout << "as double : ";
        std::cout << x << std::endl;
}

void Scalar :: asChar()
{
    char x = static_cast<char>(_content);
    std::cout << "as char : ";
        std::cout << x << std::endl;
}