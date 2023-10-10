#include <iostream>
using namespace std;
// // Funciton for Search Element in Array
// int searchElement(int arr[], int size, int val)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == val)
//         {
//             return i;
//             break;
//         }
//     }
//     return -1;
// }

// // Print Array
void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// // Function To Reverse Array Element
// void reverseArray(int arr[], int size)
// {
//     int new_arr[size];
//     int tmp = size - 1;
//     for (int i = 0; i < size; i++)
//     {
//         new_arr[i] = arr[tmp];
//         tmp--;
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout << new_arr[i] << " ";
//     }
// }

// // OR
// // Swap first ans last upto middle
void swapArr(int arr[], int size)
{
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        // Builtin Function
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main()
{
    // Array Declaration
    int myArr[5] = {1, 2, 3, 4, 5};
    // Find size of arrya
    int s = sizeof(myArr) / sizeof(myArr[0]);
    // Function Call
    // cout << searchElement(myArr, s, 3);
    // reverseArray(myArr, s);
    // OR
    swapArr(myArr, s);
    printArr(myArr, s);
    return 0;
}