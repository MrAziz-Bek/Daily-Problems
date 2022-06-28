#include <iostream>
#include <vector>

using namespace std;

vector<int> rotate_list_lef_by_k(vector<int> &nums, int k)
{
    int n = nums.size();
    int start = 0, end = k - 1;

    while (start < end)
    {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
    start = k, end = n - 1;

    while (start < end)
    {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
    start = 0, end = n - 1;
    while (start < end)
    {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
    return nums;    
}