#include <iostream>
#include <vector>
using namespace std;
// Trapping rain water   time complexity = O(n)  ,  Space complexity = O(n)
// int findWaterUnit(int arr[], int size)
// {
//     // 1st find maximum of Left side of building
//     int maxleft[size];
//     maxleft[0] = 0;
//     for (int i = 1; i < size; i++)
//     {
//         maxleft[i] = max(maxleft[i - 1], arr[i - 1]);
//     }

//     // 2nd find maximum of Right side of building
//     int maxRight[size];
//     maxRight[size - 1] = 0;
//     for (int i = size - 2; i >= 0; i--)
//     {
//         maxRight[i] = max(maxRight[i + 1], arr[i + 1]);
//     }

//     int sum = 0;

//     // Print unit of water
//     for (int i = 0; i < size; i++)
//     {
//         int minwater = min(maxleft[i], maxRight[i]) - arr[i];

//         if (minwater > 0)
//             sum += minwater;
//     }
//     return sum;
// }

// // Optimize Solution time complexity = O(n) , Space complexity = O(1);
// int findWaterUnit(int arr[], int size)
// {
//     // 1st find Max height build
//     int water = 0, maxheight = arr[0], index = 0, leftmax = 0, rightmax = 0;
//     for (int i = 1; i < size(); i++)
//     {
//         if (maxheight < arr[i])
//         {
//             maxheight = arr[i];
//             index = i;
//         }
//     }

//     // 2nd Part left max
//     for (int i = 0; i < index; i++)
//     {
//         if (leftmax > arr[i])
//         {
//             water += leftmax - arr[i];
//         }
//     }

//     // 3rd Part right max
//     for (int i = size() - 1; i > index; i--)
//     {
//         if (rightmax > arr[i])
//         {
//             water += rightmax - arr[i];
//         }
//         else
//         {
//             rightmax = arr[i];
//         }
//     }
//     return water;
// }

// // Triplate Sum in an array
int triplateSum(int arr[], int size, int sum)
{
    // Sort Array Bubble Sort
    for (int i = size - 2; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    // find sum
    for (int i = 0; i < size; i++)
    {
        int ans = sum - arr[i];
        int start = i + 1;
        int end = size - 1;
        while (start < end)
        {
            if (arr[start] + arr[end] == ans)
            {
                return 1;
            }
            else if (arr[start] + arr[end] > ans)
            {
                end--;
            }
            else
            {
                start++;
            }
        }
    }
}

int main()
{
    int buildLegth[8] = {4, 2, 0, 5, 2, 6, 2, 3};
    // cout << findWaterUnit(buildLegth, 8);

    cout << triplateSum(buildLegth, 8, 9);

    return 0;
}