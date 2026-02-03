#include "raindrops.h"


namespace raindrops {

std::string convert(int num)
{
    std::string answer{""};
    if (num == 1)
    {
      return "1";
    }
    if (num % 3 == 0)
    {
        answer += "Pling";
    }
    if (num % 5 == 0)
    {
        answer += "Plang";
    }
    if (num % 7 == 0)
    {
        answer += "Plong";
    }
    if (num % 3 != 0 and num % 5 != 0 and num % 7 != 0)
    {
        answer += std::to_string(num);
    }
    return answer;
}

}  // namespace raindrops
