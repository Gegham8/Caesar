#include "Caesar.h"

std::string Caesar::decode(std::string& str, const size_t index)
{
    int size = str.size();
    for (size_t i = 0; i < size; ++i)
    {
        char let = str[i];
        if (let >= letters::A && let <= letters::Z)
        {
            let -= index;
            if (let < letters::A)
            {
                let = let - letters::A + letters::Z + 1;
            }
            str[i] = let;
        }
        else if (let >= letters::a && let <= letters::z)
        {
            let -= index;
            if (let < letters::a)
            {
                let = let - letters::a + letters::z + 1;
            }
            str[i] = let;
        } 
    }
    return str;
}

std::string Caesar::encode(std::string& str, const size_t index) 
{
    int size = str.size();
    
    for (int i = 0; i < size; ++i)
    {
        char let = str[i];
        if (let >= letters::a && let <= letters::z)
        {
            let += index;
            if (let > letters::z)
            {
                let = let + letters::a - letters::z + 1;
            }
            str[i] = let;
        }
        else if (let >= letters::A && let <= letters::Z)
        {
            let += index;
            if (let > letters::Z)
            {
                let = let + letters::A - letters::Z + 1;
            }
            str[i] = let;
        }
    }
    return str;
}
    