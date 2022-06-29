#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

bool check_power_of_two(int n)
{
   return n && !(n & n - 1);
}