#include "Serialize.hpp"

int main()
{
	t_Data *data = new t_Data;
	data->content = "Hello world";
	///////////////////////////////
	uintptr_t tmp = serialize(data);
	std::cout << "original data :    " << data->content << std::endl;
	t_Data *newData = deserialize(tmp);
	std::cout << "deserialized data :   " <<  newData->content << std::endl;



}