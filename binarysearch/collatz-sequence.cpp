#include <iostream>

using namespace std;

int collatz_sequence(int n) {
    int count = 1;

    while(n!=1)
    {
        if (n % 2 == 0)
            n /= 2;
        else
            n = n * 3 + 1;
        count++;
    }
    return count;
}