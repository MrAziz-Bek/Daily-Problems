#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool swap_characters_to_equalize_strings(string s, string t)
{
    vector<int> map(s.length());
    for(auto c : s)
        map[c - 'a']++;
    for(auto c : t)
        map[c - 'a']++;
    for(int i : map)
    {
        if(i % 2 == 1)
            return false;
    }
    return true;
}