#include <iostream>
#include <vector>

using namespace std;

string consecutive_duplicates(string s)
{
    string res;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] != s[i + 1])
            res += s[i];
    }
    return res;
}