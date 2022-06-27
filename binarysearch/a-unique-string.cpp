#include <iostream>
#include <vector>

using namespace std;

bool a_unique_string(string str)
{
    int n = str.length();
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if (str[i] != str[j])
                continue;
            return false;
        }
    }
    return true;
}