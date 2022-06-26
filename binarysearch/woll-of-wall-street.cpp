#include <iostream>
#include <vector>

using namespace std;

int woll_of_wall_street(vector<int> &prices)
{
    int n = prices.size();
    if(n == 0)
        return 0;
    int max_profit = 0;
    int min_price = prices[0];
    for (int i = 1; i < n; i++)
    {
        if (min_price > prices[i])
            min_price = prices[i];
        else if (max_profit < prices[i] - min_price)
            max_profit = prices[i] - min_price;
    }
    return max_profit;
}