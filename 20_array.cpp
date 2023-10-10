#include <iostream>
using namespace std;
int main()
{
    // // Types Array Declaration
    // int arr[5] = {1, 2, 3, 4, 5};
    // int arr[] = {1, 2, 3, 4, 5};
    // int arr[5] = {0};   // only for single zero store all zero elements like {0,0,0,0,0}
    int arr[5] = {1, 2, 3, 4, 5};
    // // Travers array using loop
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << " ";
    }

    // // Inpute Elements in array from user
    int numbers[1000];
    int size;
    cout << "Enter Size of Array";
    cin >> size;
    // Inpute
    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << i << " Number : ";
        cin >> numbers[i];
    }
    // Output
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " , ";
    }

    // // Logic to find max element in array
    int max = arr[0];
    for (int i = 0; i < 5; i++)
    {
        // // Another type of accessing element in array  - >     i[arr]
        // cout << "C" << i[arr] << endl;
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else
        {
            continue;
        }
    }
    cout << "Maximum element in Array is : " << max;

    // // Logic to find min element in array
    int min = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        else
        {
            continue;
        }
    }
    cout << "Minimum element in array is : " << min;

    return 0;
}