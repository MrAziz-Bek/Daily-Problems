#include <iostream>
#include <vector>

using namespace std;

string run_length_encoding(string str)
{
    int count = 1;
    string result = "";
    for (int i = 0; i < str.length() - 1; i++)
    {
        if (str[i] == str[i + 1])
            count++;
        else
        {
            result += to_string(count) + str[i];
            count = 1;
        }
    }
    return result;
}