#include <iostream>
#include <cstring>

using namespace std;

int longest_consecutive_duplicate_string(string s)
{
    if (s.length() == 0)
        return 0;
    int count = 1, prev = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s[i + 1])
            count++;
        else
        {
            prev = count > prev ? count : prev;
            count = 1;
        }
    }
    int longest = prev > count ? prev : count;

    return longest;
}