#include <iostream>
#include <cstring>

using namespace std;

bool check_palindrome(string s)
{
    string rev = s;
    reverse(rev.begin(), rev.end());
    return rev == s;
}