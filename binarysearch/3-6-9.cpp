#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

bool containsClapNumber(int n)
{
    if (n % 3 == 0)
        return true;
    while(n)
    {
        int digit = n % 10;
        if(digit == 3 || digit == 6 || digit == 9)
            return true;
        n /= 10;
    }
    return false;
}

vector<string> three_six_nine(int n)
{
    vector<string> numbers;
    if (n == 0)
        return numbers;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 || i % 6 == 0 || i % 9 == 0)
            numbers.push_back("clap");
        else
        {
            if (containsClapNumber(i) == true)
                numbers.push_back("clap");
            else
                numbers.push_back(to_string(i));
        }
    }
    return numbers;
}