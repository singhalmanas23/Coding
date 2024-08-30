#include <iostream>
using namespace std;
bool search(vector<vector<int>> &matrix, int n, int m, int x)
{
    int i = 0;
    int j = m - 1;
    int flag = 0;
    while (i < n && j >= 0)
    {
        if (matrix[i][j] == x)
        {
            return true;
        }
        else if (matrix[i][j] < x)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return false;
}