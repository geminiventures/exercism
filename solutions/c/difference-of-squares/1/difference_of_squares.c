#include "difference_of_squares.h"
int main(void) {

}
unsigned int difference_of_squares(unsigned int n)
{
    unsigned int sum = 0;
    for (unsigned int i = 1; i <= n; i++)
        sum += i;
    unsigned int square_of_sum = sum * sum;

    unsigned int sum_of_squares = 0;
    for (unsigned int i = 1; i <= n; i++)
        sum_of_squares += i * i;
    return (square_of_sum - sum_of_squares);
}


