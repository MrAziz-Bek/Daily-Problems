#include <iostream>
#include <vector>

using namespace std;

bool rotation_of_another_string(string str1, string str2)
{
    return (str1.length() == str2.length() && (str1 + str1).find(str2) != string::npos);
}