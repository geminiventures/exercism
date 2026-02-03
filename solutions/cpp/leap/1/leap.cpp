#include "leap.h"

namespace leap {

bool is_leap_year(int year)
{
    bool isLeapYear{false};
    if ((year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0)
    {
        isLeapYear = true;
    }

    return isLeapYear;
}


}  // namespace leap
