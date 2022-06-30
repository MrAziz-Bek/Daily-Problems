#include <iostream>

using namespace std;

int hamming_distance(int x, int y)
{
    int dist = x ^ y;
    int setBits = 0;

    while (dist > 0)
    {
        setBits += dist & 1;
        dist >>= 1;
    }
    return setBits;
}