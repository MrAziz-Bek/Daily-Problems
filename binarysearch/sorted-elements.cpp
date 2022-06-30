#include <iostream>
#include <vector>

using namespace std;

int sorted_elements(vector<int> &nums)
{
    if (nums.size() == 0)
        return 0;

    vector<int> vec = nums;
    sort(nums.begin(), nums.end());
    
    int count = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == nums[i])
            count++;
    }
    return count;
}