//
// Created by Дима Щипицын on 03/09/2021.
//

#include <iostream>

struct Data {
    std::string name;
    int         age;
};

uintptr_t serialize(Data *data)
{
    uintptr_t ptrData;

    ptrData = reinterpret_cast<uintptr_t>(data);
    return ptrData;
}

Data *deserialize(uintptr_t raw)
{
    Data *data;

    data = reinterpret_cast<Data *>(raw);
    return data;
}

int main()
{
    Data *data = new Data;

    *data = (Data) {
        .name = "Sergey",
        .age = 30
    };
    uintptr_t ptrData = serialize(data);
    Data *deserializeData = deserialize(ptrData);
    
    std::cout << "data hex address: " << data << std::endl;
    std::cout << "ptrData hex address: " << ptrData << std::endl;
    std::cout << "deserializeData hex address: " << deserializeData << std::endl;

    std::cout << "deserializeData values: "  << deserializeData->name << " " << deserializeData->age << std::endl;
    return 0;
}

