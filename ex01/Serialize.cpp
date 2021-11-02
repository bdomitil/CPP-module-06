#include "Serialize.hpp"

uintptr_t serialize(t_Data *data)
{
    return (reinterpret_cast<uintptr_t>(data));
}

t_Data *deserialize (uintptr_t raw)
{
    return (reinterpret_cast<t_Data*>(raw));
}