#include <iostream>
#include <string>

bool operator<(std::string& str1, std::string& str2)
{
    return std::stod(str1) < std::stod(str2);
}

bool operator>(std::string& str1, std::string& str2)
{
    return std::stod(str1) > std::stod(str2);
}

// template<typename U>
// bool std::string::operator>(const std::string& a)
// {
//     return std::stod(*this) > std::stod(a);
// }