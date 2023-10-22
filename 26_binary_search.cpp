#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int num)
{
    int start = 0;
    int end = size - 1;
    int mid;
    while (start <= end)
    {
        // Mid
        mid = (start + end) / 2;
        // mid == num
        if (arr[mid] == num)
        {
            return mid;
        }
        // mid < num -> right
        else if (arr[mid] < num)
        {
            start = mid + 1;
        }
        // mid > num -> left
        else
        {
            end = mid - 1;
        }
    }
    // num not present return -1
    return -1;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << binarySearch(arr, 5, 4);
    return 0;
}