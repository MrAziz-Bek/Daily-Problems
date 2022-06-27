#include <iostream>
#include <vector>

using namespace std;

bool sum_of_two_numbers(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());
    int i = 0, j = nums.size() - 1;

    while (i < j)
    {
        int sum = nums[i] + nums[j];
        if (sum == k)
            return true;
        else if (sum > k)
            j--;
        else
            i++;
    }

    return false;
}