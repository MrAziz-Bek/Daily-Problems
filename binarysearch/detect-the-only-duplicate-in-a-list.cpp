#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int detect_the_only_duplicate_in_a_list(vector<int> &nums)
{
    int n = nums.size() - 1;
    int sum = accumulate(nums.begin(), nums.end(), 0);
    int sum_original = (n * (n + 1)) / 2;
    return sum - sum_original;
}