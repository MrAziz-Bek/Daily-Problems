#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int odd_number_of_digits(vector<int>& nums)
{
    int n = nums.size(), count = 0;
    for(int i = 0; i < n; i++)
        count += int(log10(nums[i]) + 1) & 1;
    return count;
}