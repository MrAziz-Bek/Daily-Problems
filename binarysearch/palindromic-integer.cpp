#include <iostream>
#include <vector>

using namespace std;

bool palindromic_integer(int num)
{
    int copyN = num;
    int reverse = 0;
    while(num)
    {
        reverse = reverse * 10 + num% 10;
        num/= 10;
    }
    return copyN == reverse;
}