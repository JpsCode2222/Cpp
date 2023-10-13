#include <iostream>
using namespace std;
int main()
{
    // Selection Sort
    //  Time complexity ---->  O(n^2)
    int n;
    cout << "Enter Size of Array";
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i << " Element in array : ";
        cin >> arr[i];
    }

    // Main Logic
    for (int i = 0; i < n - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index])
                index = j;
        }
        swap(arr[i], arr[index]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}