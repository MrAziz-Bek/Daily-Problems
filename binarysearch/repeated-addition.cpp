#include <iostream>
#include <vector>

using namespace std;

int repeated_addition(int n)
{
    int sum = 0;
    while(n)
    {
        sum += n % 10;
        n /= 10;
    }
    while(sum >= 10)
        sum = sum % 10 + sum / 10;        
    return sum;
}