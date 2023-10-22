#include <iostream>
using namespace std;
// // Find the first and last position of element in sorted array
// void firstLastPosition(int arr[], int size, int target)
// {
//     int start = 0, end = size - 1, mid, first = -1, last = -1;
//     while (start <= end)
//     {
//         mid = start + (end - start) / 2;
//         if (arr[mid] == target)
//         {
//             first = mid;
//             end = mid - 1;
//         }
//         else if (arr[mid] < target)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//     }

//     start = 0, end = size - 1;
//     while (start <= end)
//     {
//         mid = start + (end - start) / 2;
//         if (arr[mid] == target)
//         {
//             last = mid;
//             start = mid + 1;
//         }
//         else if (arr[mid] < target)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//     }
//     return first, last;
// }

// // Find the index of targeted element in sorted array
// // Search insert position
// int findIndexOfElement(int arr[], int size, int target)
// {
//     if (target == 0)
//     {
//         return 0;
//     }
//     int start = 0, end = size - 1, mid, index = 0;
//     while (start <= end)
//     {
//         mid = start + (end - start) / 2;
//         if (arr[mid] == target)
//         {
//             index = mid;
//             break;
//         }
//         else if (arr[mid] < target)
//         {
//             index = mid + 1;
//             start = mid + 1;
//         }
//         else
//         {
//             index = mid - 1;
//             end = mid - 1;
//         }
//     }
//     return index;
// }

// // Find Square root of number
// int findSquareRoot(int arr[], int size, int num)
// {
//     int start = 0, end = size - 1, mid, ans;
//     while (start <= end)
//     {
//         mid = start + (end - 1) / 2;
//         if (arr[mid] * arr[mid] == num)
//         {
//             ans = arr[mid];
//             return ans;
//         }
//         else if (arr[mid] * arr[mid] < num)
//         {
//             ans = arr[mid];
//             start = mid + 1;
//         }
//         else
//         {
//             ans = arr[mid];
//             end = mid - 1;
//         }
//     }
//     return ans;
// }

// // Peak index of element in mountain array
// int peakIndexInMountainArr(int arr[], int size)
// {
//     int start = 0, end = size - 1, mid;
//     while (start <= end)
//     {
//         mid = end + (start - end) / 2;
//         if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
//         {
//             return mid;
//         }
//         else if (arr[mid] > arr[mid - 1])
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//     }
//     return -1;
// }

// // Find minimul number in rotated array
int findMinimumElemtn(int arr[], int size)
{
    int start = 0, end = size - 1, mid = -1, ans = arr[0];
    while (start <= end)
    {
        mid = end + (start - end) / 2;
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            ans = arr[mid];
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int arr[5] = {10, 20, 30, 5, 7};
    // cout << firstLastPosition(arr, 5, 30);
    // cout << findIndexOfElement(arr, 5, 0);
    // cout << findSquareRoot(arr, 5, 100);
    // cout << peakIndexInMountainArr(arr, 5);
    cout << findMinimumElemtn(arr, 5);
    return 0;
}