#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> generate_primes(int n)
{
    vector<int> primes;
    for (int i = 2; i <= n; i++)
    {
        bool tub = true;
        for (int j = 2; j <= sqrt(i); j++)
            if (i % j == 0)
            {
                tub = false;
                break;
            }
        if(tub)
            primes.push_back(i);
    }
    return primes;
}