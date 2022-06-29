#include <iostream>
#include <vector>

using namespace std;

vector<int> pascals_triangle(int n)
{
    vector<int> ans;
    ans.push_back(1);
    if (n == 0)
        return ans;

    for (int i = 0; i < n / 2; i++)
        ans.push_back((ans.back() * (n - i)) / (i + 1));

    if (n % 2 != 0)
        ans.insert(ans.end(), ans.rbegin(), ans.rend());
    else
        ans.insert(ans.end(), ans.rbegin() + 1, ans.rend());

    return ans;
}