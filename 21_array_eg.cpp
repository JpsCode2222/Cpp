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
// void swapArr(int arr[], int size)
// {
//     int i = 0;
//     int j = size - 1;
//     while (i < j)
//     {
//         // Builtin Function
//         swap(arr[i], arr[j]);
//         i++;
//         j--;
//     }
// }

// // Second Largest Element in array
// int secondLargElement(int arr[], int size)
// {
//     int ans = -1;
//     // Largest Element
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] > ans)
//             ans = arr[i];
//     }

//     // Second Largest Element
//     int second = -1;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] != ans)
//         {
//             second = max(second, arr[i]);
//         }
//     }

//     return second;
// }

// // Missing number in array
// int missNumber(int arr[], int size)
// {
//     int tmpsum = 0, sum = 0;
//     for (int i = 0; i < size - 1; i++)
//     {
//         tmpsum += arr[i];
//     }
//     // for (int i = 1; i <= size; i++)
//     // {
//     //     sum += i;
//     // }

//     // // OR
//     // // Formulat to find sum of n numbers
//     sum = size * (size + 1) / 2;
//     return sum - tmpsum;
// }

// int fibonachi(int n)
// {
//     int arr[1000];
//     arr[0] = 0;
//     arr[1] = 1;
//     for (int i = 2; i < n; i++)
//         arr[i] = arr[i - 1] + arr[i - 2];

//     return arr[n - 1];
// }

// int rotateArrByOne(int arr[], int size)
// {
//     int temp = arr[size - 1];
//     for (int i = size; i >= 0; i--)
//     {
//         arr[i] = arr[i - 1];
//     }
//     arr[0] = temp;
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << endl;
//     }
//     return 1;
// }

int main()
{
    // Array Declaration
    int myArr[] = {1, 3, 4, 5};
    // Find size of arrya
    int s = sizeof(myArr) / sizeof(myArr[0]);
    // Function Call
    // cout << searchElement(myArr, s, 3);
    // reverseArray(myArr, s);
    // OR
    // swapArr(myArr, s);
    // cout << secondLargElement(myArr, s);
    // printArr(myArr, s);
    // cout << missNumber(myArr, 5);
    // cout << fibonachi(4);
    // cout << rotateArrByOne(myArr, s);
    return 0;
}