#include <iostream>
using namespace std;
// // Page Distributin problem || Book Allocation
// // Not work properly just try
// int pageDistribution(int arr[], int size, int m)
// {
//     int start = arr[size - 1], end = 0, mid, ans;
//     for (int i = 0; i < size; i++)
//     {
//         end += arr[i];
//     }
//     while (start <= end)
//     {
//         int count = 1, pages = 0, mid = start + (end - start) / 2;
//         for (int i = 0; i < size; i++)
//         {
//             if (pages > mid)
//             {
//                 count++;
//                 pages = arr[i];
//             }
//         }
//         if (count <= m)
//         {
//             ans = mid;
//             end = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//         }
//         return ans;
//     }
// }

// // Book Allocation problem solution
// // N = size of arr, M = students
// int bookAllocation(int A[], int N, int M)
// {
//     if (M > N)
//     {
//         return -1;
//     }

//     int start = 0, end = 0, mid, ans;
//     for (int i = 0; i < N; i++)
//     {
//         start = max(start, A[i]);
//         end += A[i];
//     }

//     while (start <= end)
//     {
//         mid = start + (end - start) / 2;
//         int pages = 0, count = 1;
//         for (int i = 0; i < N; i++)
//         {
//             pages += A[i];
//             if (pages > mid)
//             {
//                 count++;
//                 pages = A[i];
//             }
//         }

//         if (count <= M)
//         {
//             ans = mid;
//             end = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//         }
//     }
//     return ans;
// }

// // Painter Partition Problem
// // N = no of walls, M = painters
// // 1m wall paint = 1unit time
// // Find minimum unit of time ?
// int painterPartition(int arr[], int N, int M)
// {
//     // step 1 -> Find sum of walls
//     int start = 0, end = 0, mid, ans;
//     for (int i = 0; i < N; i++)
//     {
//         if (start < arr[i])
//             start = arr[i];
//         end += arr[i];
//     }

//     // step 2 -> check goto left or right also find mid
//     while (start <= end)
//     {
//         int walls = 0, painter = 1, mid = start + (end - start) / 2;
//         // loop through arr
//         for (int i = 0; i < N; i++)
//         {
//             // create combinations
//             walls += arr[i];
//             // wall > mid -> painter++ wall=arr[i]
//             if (walls > mid)
//             {
//                 painter++;
//                 walls = arr[i];
//             }
//         }
//         // painter count <= M
//         if (painter <= M)
//         {
//             // store min in ans
//             ans = mid;
//             end = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//         }
//     }
//     return ans;
// }

// // Aggressive Cow
// // stall = array of stall , size of arr, k is cows
// int aggressiveCow(int stall[], int n, int K)
// {
//     // Step 1 -> Sort Array
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (stall[i] > stall[j])
//             {
//                 int temp = stall[i];
//                 stall[i] = stall[j];
//                 stall[j] = temp;
//             }
//         }
//     }

//     int start = 1, end = stall[n - 1] + stall[0], mid, ans;
//     while (start <= end)
//     {
//         mid = start + (end - start) / 2;
//         int count = 1, pos = stall[0];
//         for (int i = 1; i < n; i++)
//         {
//             if (pos + mid <= stall[i])
//             {
//                 count++;
//                 pos = stall[i];
//             }
//         }
//         if (count < k)
//         {
//             end = mid - 1;
//         }
//         else
//         {
//             ans = mid;
//             start = mid + 1;
//         }
//     }
//     return ans;
// }

// //KOKO eating Banana
int minEatingSpeed(int arr[], int size, int h)
{
    int start = 0, end = 0, mid, ans, n = size;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        end = max(end, arr[i]);
    }
    start = sum / h;
    if (!start)
    {
        start = 1;
    }
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        // mid ammount of bananas to consume
        int total_time = 0;
        for (int i = 0; i < n; i++)
        {
            total_time += arr[i] / mid;
            // time = 1.5 so add only 1 ans another one is added if some value is inserted
            if (arr[i] % mid)
            {
                total_time++;
            }
        }
        if (total_time > h)
        {
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }
    return ans;
}
int main()
{
    // Pages of Books
    int arr[4] = {13, 12, 36, 67};
    // cout << pageDistribution(arr, 4, 2);
    // cout << bookAllocation(arr, 4, 2);
    // cout << painterPartition(arr, 4, 4);
    // cout << aggressiveCow(arr, 4, 3);
    cout << minEatingSpeed(arr, 4, 100);
    return 0;
}