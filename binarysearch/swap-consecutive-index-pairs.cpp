#include <iostream>
#include <vector>

using namespace std;

vector<int> swap_consecutive_index_pairs(vector<int> &nums)
{
    int count = 0;
    for (int i = 0; i + 2 < nums.size(); i++)
    {
        swap(nums[i], nums[i + 2]);
        count++;
        if (count == 2)
        {
            i += 2;
            count = 0;
        }
    }
    return nums;
}