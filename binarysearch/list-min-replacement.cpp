#include <iostream>
#include <vector>

using namespace std;

vector<int> list_min_replacement(vector<int> &nums)
{
    int min = nums[0];
    nums[0] = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        int temp = nums[i];
        nums[i] = min;
        min = min > temp ? temp : min;
    }
    return nums;
}