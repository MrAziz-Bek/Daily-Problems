#include <iostream>
#include <cstring>

using namespace std;

int longest_consecutive_duplicate_string(string s)
{
    if (s.length() == 0)
        return 0;
    int count = 1, max = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s[i + 1])
            count++;
        else
        {
            max = count > max ? count : max;
            count = 1;
        }
    }

    return max;
}