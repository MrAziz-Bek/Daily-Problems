#include <iostream>
#include <vector>

using namespace std;

int median_minimization(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size() / 2;
    return nums[n] - nums[n - 1];
}