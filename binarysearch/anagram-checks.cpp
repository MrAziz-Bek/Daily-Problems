#include <iostream>
#include <unordered_map>
#include <cstring>

using namespace std;

bool anagram_checks(string s0, string s1)
{
    if(s0.length() != s1.length())
        return false;
    unordered_map<char, int> freq;

    for(auto i : s0)
        freq[i]++;
    for(auto i : s1)
    {
        freq[i]--;
        if(freq[i] == 0)
            freq.erase(i);
    }
    return freq.size() == 0;
}