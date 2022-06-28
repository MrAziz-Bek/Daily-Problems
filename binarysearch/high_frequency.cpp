#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int high_frequency(vector<int> nums)
{
    unordered_map<int, int> map;
    int max_frequency = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        map[nums[i]]++;
        if(max_frequency < map[nums[i]])
            max_frequency = map[nums[i]];
    }
    return max_frequency;
}