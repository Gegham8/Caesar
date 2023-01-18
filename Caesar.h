#ifndef _Caesar
#define _Caesar

#include <iostream>
#include <string>
class Caesar
{
public:
    std::string decode(std::string&,const size_t);
    std::string encode(std::string&, const size_t);
private:
    enum letters { a = 97, z = 122, A = 65, Z = 90};
};

#endif // _Caesar