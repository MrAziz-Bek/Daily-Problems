#include <iostream>

using namespace std;

int sum_of_the_digits(int num)
{
    int sum = 0;
    while(num)
    {
        sum += num % 10;
        num /=10;
    }
    return sum;
}