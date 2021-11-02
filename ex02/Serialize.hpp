#include <iostream>

typedef std::string string;

typedef struct s_Data
{
    string content;

}   t_Data;

uintptr_t serialize(t_Data *data);
t_Data* deserialize(uintptr_t raw);
