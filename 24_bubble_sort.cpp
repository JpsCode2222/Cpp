// Bubble Sort
// Take larg no. at last then second lg no and so on ...
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Size of array : ";
    cin >> n;
    int arr[4] = {10, 2, 3, 4};

    // Main Logic
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }

    // Print Elements in  arr
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}