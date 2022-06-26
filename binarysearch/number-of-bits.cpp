#include <iostream>
#include <vector>

using namespace std;

int number_of_bits(int n)
{
    int count = 0;
    while (n)
    {
        count++;
        n = n & (n - 1);
    }
    return count;
}