#include <iostream>
#include <vector>
using namespace std;
// Two pointer problem O(n)
// Segregate 0s and 1s
// void twoPointerProblem(int v[], int size)
// {
//     int start = 0, end = size - 1;
//     while (start < end)
//     {
//         if (v[start] == 0)
//         {
//             start++;
//         }
//         else
//         {
//             if (v[end] == 0)
//             {
//                 swap(v[start], v[end]);
//                 start++, end--;
//             }
//             else
//             {
//                 end--;
//             }
//         }
//     }
//     for (int i = 0; i < size - 1; i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << "\n";
// }

// Two sum
// vector<int> twoSum(vector<int> &num, int target)
// {
//     vector<int> ans;
//     int start = 0, end = num.size() - 1;
//     while (start < end)
//     {
//         if (num[start] + num[end] == target)
//         {
//             ans.push_back(start + 1);
//             ans.push_back(end + 1);
//             break;
//         }
//         else if (num[start] + num[end] < target)
//         {
//             start++;
//         }
//         else
//         {
//             end--;
//         }
//     }
//     return ans;
// }

int main()
{
    // int arr[] = {1, 0, 0, 0, 1, 1, 1};
    // twoPointerProblem(arr, 8);

    // vector<int> v = {1, 2, 3, 4, 5};
    // for (int i = 0; i < twoSum(v, 3).size(); i++)
    // {
    //     cout << i;
    // };

    vector<int> v = {1, 2, 3, 4, 5};

    return 0;
}