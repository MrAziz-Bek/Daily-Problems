#include <iostream>
#include <vector>

using namespace std;

vector<int> square_of_a_list(vector<int> &nums)
{
    int n = nums.size();

    int r = n - 1, l = 0, i = n - 1;

    vector<int> res(n);

    while (l <= r)
    {
        int rsq = nums[r] * nums[r];
        int lsq = nums[l] * nums[l];
        if (lsq > rsq)
        {
            res[i] = lsq;
            l++;
        }
        else
        {
            res[i] = rsq;
            r--;
        }
        i--;
    }
    return res;
}