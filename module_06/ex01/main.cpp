#include <iostream>
#include <string>
#include <stdint.h>
#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
    return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return(reinterpret_cast<Data *>(raw));
}

int main(void)
{
    Data        *data = new Data();
    uintptr_t   serialized;
    Data        *deserialized;

    data->value = 8;
    std::cout << "the adress : " << data << std::endl;
    serialized = serialize(data);
    std::cout << "the serialized uintptr_t : " << serialized << std::endl;
    deserialized = deserialize(serialized);
    std::cout << "data deserialized address : " << deserialized << " = " << data << std::endl;
    delete data;
    return 0;
}