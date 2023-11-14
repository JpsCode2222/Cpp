#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Spiral Matrix
vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int row = matrix.size(), col = matrix[0].size();
    int top = 0, bottom = row - 1, left = 0, right = col - 1;
    while (left <= right && top <= bottom)
    {
        // Print Top
        for (int i = left; i <= right; i++)
        {
            ans.push_back(matrix[top][i]);
            top++;
        }
        // print Right
        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(matrix[i][right]);
            right--;
        }
        // print bottom
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                ans.push_back(matrix[bottom][i]);
                bottom--;
            }
        }
        // print left
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                ans.push_back(matrix[i][left]);
                left++;
            }
        }
    }
    return ans;
}

int main()
{
    // Syntax of 2d vector 3 rows and 4 cols and initialize by 1
    vector<vector<int>> matrix(3, vector<int>(4, 1));
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            cout << matrix[i][j] << " ";

    // Find rows
    cout << "Rows : " << matrix.size();
    // Find Colums
    cout << "Cols : " << matrix[0].size();

    // Wave Form
    int row, col;
    cout << "Enter no of rows : ";
    cin >> row;
    cout << "Enter no of cols : ";
    cin >> col;

    vector<vector<int>> vect(row, vector<int>(col));
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cin >> vect[i][j];

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cout << vect[i][j] << " ";

    // cout << "Wave form : ";
    // for (int i = 0; i < row; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         for (int j = 0; j < col; j++)
    //         {
    //             cout << vect[j][i];
    //         }
    //     }
    //     else
    //     {
    //         for (int j = col - 1; j >= 0; j--)
    //         {
    //             cout << vect[j][i];
    //         }
    //     }
    // }
    cout << spiralOrder(matrix) return 0;
}