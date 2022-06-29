#include <iostream>
#include <vector>

using namespace std;

vector<int> merging_two_sorted_lists(vector<int> &a, vector<int> &b)
{
    int i = 0, j = 0;
    vector<int> res;
    while (i < a.size() || j < b.size())
    {
        bool chooseA = j == b.size() || (i != a.size() && a[i] < b[j]);
        res.push_back(chooseA ? a[i++] : b[j++]);
    }
    return res;
}