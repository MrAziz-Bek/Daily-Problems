#include <iostream>
#include <vector>

using namespace std;

string integer_to_base_3(int n)
{
    if(n == 0)
        return 0;
    string res;
    while (n)
    {
        res += to_string(n % 3);
        n /= 3;
    }
    reverse(res.begin(), res.end());
    return res;
}