#include <iostream>
#include <vector>
using namespace std;
// PrefixSum
// void prefixSum(vector<int> arr)
// {
//     int size = arr.size();
//     vector<int> prefix(size);
//     prefix[0] = arr[0];
//     // Sum of prefix
//     for (int i = 1; i < size; i++)
//     {
//         prefix[i] = prefix[i - 1] + arr[i];
//     }
//     // Print Elements in vector prefix
//     cout << "Prefix Sum : " << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout << prefix[i] << " ";
//     }
//     cout << endl;
// }

// // suffixSum
// void suffixSum(vector<int> arr)
// {
//     int size = arr.size();
//     vector<int> suffix(size);
//     suffix[size - 1] = arr[size - 1];
//     for (int i = size - 2; i >= 0; i--)
//     {
//         suffix[i] = suffix[i + 1] + arr[i];
//     }
//     // SuffixSum Print
//     cout << "Suffix Sum : " << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout << suffix[i] << " ";
//     }
// }

// // Array Sum of 2 subarray
// bool divide(vector<int> arr)
// {
//     int prefix = 0, sum = 0, n = arr.size();
//     // Total Sum
//     for (int i = 0; i < n; i++)
//         sum += arr[i];

//     for (int i = 0; i < n; i++)
//     {
//         prefix += arr[i];
//         if (sum == 2 * prefix)
//             return 1;
//     }
//     return 0;
// }

// // Kadane's Alorithm
// long long maxSubarraySum(int arr[], int n)
// {
//     long long maxi = INT_MIN, prefix = 0;
//     for (int i = 0; i < n; i++)
//     {
//         prefix += arr[i];
//         maxi = max(prefix, maxi);
//         if (prefix < 0)
//             prefix = 0;
//     }
//     return maxi;
// }
int main()
{
    // vector<int> arr = {6, 4, 5, -3, 2, 8};
    // prefixSum(arr);
    // suffixSum(arr);

    // Array sum of 2 subarray
    // vector<int> arr = {1, 2, 3, 3, 2, 1};
    // cout << divide(arr);

    int arr[] = {1, 2, 3, 3, 2, 1};
    cout << maxSubarraySum(arr, 6);
    return 0;
}