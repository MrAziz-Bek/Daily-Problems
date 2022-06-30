#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> transpose_of_a_matrix(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    return matrix;
}