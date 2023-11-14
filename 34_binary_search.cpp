#include <iostream>
#include <algorithm>
using namespace std;
// Find Element in matrix using binary search
// timeComplexity = O(NM)
// spaceComplexity = O(1)
// bool searchNumber(int arr[][4], int row, int col, int num)
// {
// 	for (int i = 0; i < row; i++)
// 	{
// 		if (arr[i][0] <= num <= arr[i][col - 1])
// 		{
// 			int start = 0, end = col;
// 			while (start <= end)
// 			{
// 				int mid = (start + end) / 2;
// 				if (arr[i][mid] == num)
// 					return 1;
// 				else if (arr[i][mid] < num)
// 					start = mid + 1;
// 				else
// 					end = mid - 1;
// 			}
// 		}
// 	}
// 	return 0;
// }

// using only index
// bool searchNumber(int arr[][4],int row,int col,int num){
// 	int start = 0, end = (row*col)-1;
// 	while(start<=end){
// 		int mid = (start + end) / 2;
// 		int row_index = mid/(col-1);
// 		int col_index = mid%(col-1);
// 		if(arr[row_index][col_index] == num)
// 			return 1;
// 		else if(arr[row_index][col_index]<num)
// 			start = mid + 1;
// 		else
// 			end = mid - 1;
// 	}
// 	return 0;
// }

// Search in sorted row col wise matris
// bool searchNumber(int arr[][], int row, int col, int target)
// {
// 	int i = 0, j = col - 1;
// 	while (i < row && j >= 0)
// 	{
// 		if (arr[i][j] == target)
// 			return 1;
// 		else if (arr[i][j] < target)
// 			i++;
// 		else
// 			j--;
// 	}
// 	return 0;
// }

// Transpose of matrix
// void transposeMatrix(int arr[][3], int row, int col)
// {
// 	int newArr[3][3];
// 	for (int i = 0; i < row; i++)
// 	{
// 		for (int j = 0; j < col; j++)
// 		{
// 			newArr[j][i] = arr[i][j];
// 		}
// 	}
// 	for (int i = 0; i < row; i++)
// 	{
// 		for (int j = 0; j < col; j++)
// 		{
// 			cout << newArr[i][j] << " ";
// 		}
// 	}
// }

// Rotate Matrix by 90 deg
// time complexity O(n^2)
// void rotateMatrix(int arr[][3], int size)
// {
// 	int ans[size][size];
// 	for (int i = 0; i < size; i++)
// 	{
// 		for (int j = 0; j < size; j++)
// 		{
// 			ans[j][size - 1 - i] = arr[i][j];
// 		}
// 	}
// 	for (int i = 0; i < size; i++)
// 	{
// 		for (int j = 0; j < size; j++)
// 		{
// 			cout << ans[i][j] << "\t";
// 		}
// 		cout << endl;
// 	}
// }

// // but optimize soln is in constant time O(n)
// void rotateMatrix(int arr[][3], int size)
// {
// 	// 1st Transpose array
// 	for (int i = 0; i < size - 1; i++)
// 	{
// 		for (int j = i + 1; j < size; j++)
// 		{
// 			swap(arr[i][j], arr[j][i]);
// 		}
// 	}

// 	// Reverse each rows
// 	for (int i = 0; i < size; i++)
// 	{
// 		int start = 0, end = size - 1;
// 		while (start < end)
// 		{
// 			swap(arr[i][start], arr[i][end]);
// 			start++;
// 			end--;
// 		}
// 	}

// // Print
// for (int i = 0; i < size; i++)
// {
// 	for (int j = 0; j < size; j++)
// 	{
// 		cout << arr[i][j] << "\t";
// 	}
// 	cout << endl;
// }
// }

// Rotate matrix in 180 deg
// Timecomplexity O(n)
// void rotate180Deg(int arr[][3], int size)
// {
// 	// Reverse col wise
// 	for (int i = 0; i < size; i++)
// 	{
// 		int start = 0, end = size - 1;
// 		while (start < end)
// 		{
// 			swap(arr[start][i], arr[end][i]);
// 			start++;
// 			end--;
// 		}
// 	}

// 	// Reverse row wise
// 	for (int i = 0; i < size; i++)
// 	{
// 		int start = 0, end = size - 1;
// 		while (start < end)
// 		{
// 			swap(arr[i][start], arr[i][end]);
// 			start++;
// 			end--;
// 		}
// 	}

// 	// Print
// 	for (int i = 0; i < size; i++)
// 	{
// 		for (int j = 0; j < size; j++)
// 		{
// 			cout << arr[i][j] << "\t";
// 		}
// 		cout << endl;
// 	}
// }
int main()
{
	int arr[3][3];
	cout << "Enter Elements in array" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> arr[i][j];
		}
	}

	// cout << "Enter number you want to find in array : " << endl;
	// int n;
	// cin >> n;
	// Search function
	// cout << searchNumber(arr, 3, 4, n);

	// transposeMatrix(arr, 3, 3);
	// rotateMatrix(arr, 3);
	// rotate180Deg(arr, 3);

	// how to store number and its ocuurnences from 1 to 99 in single position
	// we use mod and divide for that
	// suppose num = 2 , occurence = 2 2 2 2  like 4 times so we store in single positon in memory ?
	// choose + 1 num for mod and divide
	int num = 2, occurence = 4;

	int pos = occurence * 100 + number;

	// tricks to find number and its occurence
	// int number = (occurence * 100 + num) % 100;
	// int occurence = (occurence * 100 + num) / 100;

	return 0;
}