#include <iostream>
#include <vector>

using namespace std;

int five_star_review_percentage(vector<vector<int>> &reviews, int threshold)
{
    int a = 0, b = 0, count = 0;
    for (int i = 0; i < reviews.size(); i++)
    {
        a += reviews[i][0];
        b += reviews[i][1];
    }

    double formula = (a * 100) / b;
    while (formula < threshold)
    {
        a += 1;
        b += 1;
        formula = (a * 100) / b;
        count++;
    }
    return count;
}