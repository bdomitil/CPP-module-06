#include "Scalar.hpp"

Scalar :: Scalar(string word)
{
	std::stringstream stream;
	if (word == "nanf" || word == "NAN" ||  word == "NANf")
	{
		_strCpy = "nan";
		word = "nan";
	}
	else if (word != "+inf" && word != "-inf" \
		&& static_cast<int>(word.find("f")) != -1)
		word = word.substr(0, word.find_last_of("f"));
	stream << word;
	if (word.length() >= 1)
		stream >> static_cast<double&>(_content);
	_strCpy = word;

}

void Scalar :: asInt()
{
	if (_strCpy == "nan" || _content > INT32_MAX|| _content < INT32_MIN )
	{
		std::cout << "as int : impossible" << std::endl;
		return ;
	}
	int x = static_cast<int>(_content);
	if (_content == 0 && _strCpy != "0")
		std::cout << "as int : impossible" << std::endl;
	else
		std:: cout << "as int : " << x << std::endl;
}

void Scalar :: asFloat()
{
	if (_strCpy == "nan")
	{
		std::cout << "as float : nanf" << std::endl;
		return ;
	}
	float x = static_cast<float>(_content);
	if (static_cast<int>(_strCpy.find(".")) == -1 && _strCpy != "nan" \
		&& _content != -INFINITY && _content != INFINITY && !(_strCpy[0] < 47 || _strCpy[0] > 57) )
	{
		std:: cout << "as float : " << x << ".0f" << std::endl;
	}
	else if ((_strCpy[0] < 47 || _strCpy[0] > 57) && _strCpy != "nan" && _content != -INFINITY && _content != INFINITY)
		std::cout << "as float : impossible" << std::endl;
	else
		std:: cout << "as float : " << x << "f" << std::endl;
}

void Scalar :: asDouble()
{
	if (static_cast<int>(_strCpy.find(".")) != -1 && _strCpy[(static_cast<int>(_strCpy.find(".")) + 1)] != '0')
	{
		std:: cout << "as double : " << _content << std::endl;
	}
	else if ((_strCpy[0] < 47 || _strCpy[0] > 57) && _strCpy != "nan" && _content != INFINITY && _content != - INFINITY)
		std::cout << "as double : impossible" << std::endl;
	else if (_strCpy == "nan")
		std:: cout << "as double : " << _content << std::endl;
	else if (_content != INFINITY && _content != -INFINITY && static_cast<int>(_strCpy.find(".")) == -1)
		std:: cout << "as double : " << _content << ".0" << std::endl;
	else
		std:: cout << "as double : " << _content << std::endl;
			

}

void Scalar :: asChar()
{
	if (_content > -1 && _content < 33 && _content != 127)
	{
		std::cout << "as char : Non displayable" << std::endl;
		return ;
	}
	else if (_strCpy == "nan" || _content > 127 || _content < 0)
	{
		std::cout << "as char : impossible" << std::endl;
			return ;
	}
	char x = static_cast<char>(_content);
	std::cout << "as char : " << x << std::endl;
}