#include <iostream>
#include <vector>

using namespace std;

bool strictly_increasing_or_decreasing(vector<int> nums)
{
    long n = nums.size();
    
    long inc = 0, dec = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] > nums[i + 1])
            dec++;
        if (nums[i] < nums[i + 1])
            inc++;
    }
    return dec == n - 1 || inc == n - 1;
}