#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int reccuring_character(string s)
{
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (ans & 1 << s[i] - 'a')
            return i;
        else
            ans |= 1 << s[i] - 'a';
    }
    return -1;
}