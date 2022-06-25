#include <iostream>
#include <vector>

using namespace std;

bool largest_number_by_2_times(vector<int> nums)
{
    int max1 = nums[0] > nums[1] ? nums[0] : nums[1];
    int max2 = nums[1] < nums[0] ? nums[1] : nums[0];
    for (int i = 2; i < nums.size(); i++)
    {
        max2 = nums[i] > max2 ? nums[i] : max2;
        max2 = nums[i] > max1 ? max1 : max2;
        max1 = nums[i] > max1 ? nums[i] : max1;
    }

    return max1 > max2 * 2;
}