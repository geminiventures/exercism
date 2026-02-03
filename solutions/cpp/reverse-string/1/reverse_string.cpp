#include "reverse_string.h"

#include <iostream>

namespace reverse_string {

std::string reverse_string(const std::string& str)
{
    std::string reverse_str{};
    for (int i = static_cast<int>(str.size()) - 1; i >= 0; i--)
    {
        reverse_str += str[i];
    }
    std::cout << reverse_str;
    return reverse_str;
}

}
