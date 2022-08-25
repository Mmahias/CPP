#include <iostream>
#include <string>
#include <stdint.h>

typedef struct s_data
{
    std::string str;
}              t_data;

uintptr_t serialize(t_data *ptr)
{
    std::cout << "Function Serialize called" << std::endl;
    return (reinterpret_cast<uintptr_t>(ptr));
}

t_data *deserialize(uintptr_t raw)
{
    std::cout << "Function Deserialize called" << std::endl;
    return (reinterpret_cast<t_data *>(raw));
}

int main(void)
{
    t_data *data = new t_data;
    t_data *data2;
    uintptr_t raw;

    data->str = "42";
    raw = serialize(data);
    data2 = deserialize(raw);
    std::cout << "Valeur d'origine: -> [" << data->str << "] | " << "Valeur deserialize : -> [" << data2->str << "]" << std::endl;

    delete data;
}