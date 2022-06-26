#include <iostream>
#include <vector>

using namespace std;

int nth_fibonacci_number(int n)
{
    int a = 1, b = a, c = a + b;
    if (n == 1)
        return a;
    else if (n == 2)
        return b;
    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}