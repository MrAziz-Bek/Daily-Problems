#include <iostream>
#include <vector>

using namespace std;

int max_product_of_two_numbers(vector<int> &nums)
{
    int max1, max2, min1, min2;
    max1 = nums[0] > nums[1] ? nums[0] : nums[1];
    max2 = nums[0] > nums[1] ? nums[1] : nums[0];
    min1 = nums[0] < nums[1] ? nums[0] : nums[1];
    min2 = nums[0] < nums[1] ? nums[1] : nums[0];

    for(int i = 2; i < nums.size(); i++)
    {
        max2 = max2 > nums[i] ? max2 : nums[i];
        max2 = max2 > max1 ? max1 : max2;
        max1 = max1 > nums[i] ? max1 : nums[i];

        min2 = min2 < nums[i] ? min2 : nums[i];
        min2 = min2 < min1 ? min1 : min2;
        min1 = min1 < nums[i] ? min1 : nums[i];
    }

    return max1 * max2 > min1 * min2 ? max1 * max2 : min1 * min2;
}