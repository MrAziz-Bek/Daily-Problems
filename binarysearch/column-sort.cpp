#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> column_sort(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    if (n == 1)
        return matrix;

    vector<vector<int>> temp(m, vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp[i][j] = matrix[j][i];
        }
    }

    for (int i = 0; i < m; i++)
    {
        sort(temp[i].begin(), temp[i].end());
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[i][j] = temp[j][i];
        }
    }
    return matrix;
}