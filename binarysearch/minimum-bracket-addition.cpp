#include <iostream>
#include <cstring>

using namespace std;

int minimum_bracket_addition(string s)
{
    int n = s.size(), c1 = 0, c2 = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '(')
            c1++;
        else if(c1 > 0)
            c1--;
        else
            c2++;
    }
    return c1 + c2;
}