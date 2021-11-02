#include "Serialize.hpp"

int main()
{
	t_Data *data = new t_Data;
	data->content = "Hello world";
	uintptr_t tmp = serialize(data);
	///////////////////////////////
	///////////////////////////////
	std::cout << "original data :    ||" << data->content << "||" << std::endl;
	std::cout << "address of original data :   ||" << data << "||" << std::endl;
	///////////////////////////////
	///////////////////////////////
	t_Data *newData = deserialize(tmp);
	std::cout << "deserialized data :   ||" <<  newData->content << "||" << std::endl;
	std::cout << "address of deserialized data :   ||" << newData << "||" << std::endl;

}