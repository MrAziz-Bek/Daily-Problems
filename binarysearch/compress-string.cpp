#include <iostream>
#include <vector>

using namespace std;

string compress_string(string str)
{
    string res;
    int count = 1;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == str[i + 1])
            count++;
        else
        {
            res += str[i];
            count = 1;
        }
    }
    return res;
}