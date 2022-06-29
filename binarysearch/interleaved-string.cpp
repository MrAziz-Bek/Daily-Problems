#include <iostream>
#include <cstring>

using namespace std;

string interleaved_string(string s0, string s1)
{
    int i = 0, j = 0;
    int n = s0.length(), m = s1.length();
    string res;
    while(i < n || j < m)
    {
        if(i < n)
            res.push_back(s0[i++]);
        if(j < m)
            res.push_back(s1[j++]);
    }
    return res;
}