#include <iostream>
using namespace std;
int insertionSort(int arr[], int size)
{
    for (int i = 1; i <= size; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
                swap(arr[j], arr[j - 1]);
            else
                break;
        }
    }
}
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[4] = {10, 20, 5, 4};
    insertionSort(arr, 4);
    display(arr, 4);
    return 0;
}