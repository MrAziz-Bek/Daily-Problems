#include <iostream>
#include <vector>

using namespace std;

bool just_average(vector<int> &nums, int k)
{
    int sum = 0;
    for(int i : nums)
        sum += i;
    int x = sum - k * (nums.size() - 1);
    return count(nums.begin(), nums.end(), x);
}