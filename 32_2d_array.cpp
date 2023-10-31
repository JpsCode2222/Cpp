#include <iostream>
using namespace std;

// Print Elements in 2D array
void display(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cout << arr[i][j] << " ";
}

// check element present or not in array
bool check(int arr[][4], int row, int col, int element)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == element)
                return true;
        }
    }
    return false;
}

// Add Two Array
void addTwoArray(int arr[][4], int arr2[][4], int row, int col)
{
    int ans[3][4];
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            ans[i][j] = arr[i][j] + arr2[i][j];
    display(ans, row, col);
}

// print row index with max sum
int printRow(int arr[][4], int row, int col)
{
    int sum = -1, index = -1;
    for (int i = 0; i < row; i++)
    {
        int total = 0;
        for (int j = 0; j < col; j++)
        {
            total += arr[i][j];
        }
        if (total > sum)
        {
            sum = total;
            index = i;
        }
    }
    return index;
}

// Daigonal Sum
void diagonalSum(int arr[][3], int row, int col)
{
    if (row != col)
        return;
    int first = 0, second = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                first += arr[i][j];
            }
        }
    }
    int i = 0, j = col - 1;
    while (j >= 0)
    {
        second += arr[i][j];
        i++;
        j--;
    }
    cout << first + second;
}

// Reverse Row
void reversRow(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int start = 0, end = col - 1;
        while (start < end)
        {
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }
    display(arr, row, col);
}
int main()
{
    // Create 2D array
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int arr2[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int arr3[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // print using function
    // display(arr, 3, 4);

    // check element present in arr or not
    // cout << check(arr, 3, 4, 10);

    // Add two array
    // addTwoArray(arr, arr2, 3, 4);

    // print row index with max sum
    // cout << printRow(arr, 3, 4);

    // print sum of daigonal
    // diagonalSum(arr3, 3, 3);

    // Reverse a Row
    reversRow(arr, 3, 4);
    return 0;
}