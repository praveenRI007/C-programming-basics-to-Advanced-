//quick sort and merge sort ---> recursive
//selection sort and insertion sort --->non recursive
//SELECTION SORT ---------------->O(N^2)
#include<iostream>
using namespace std;
void SelectionSort(int A[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int iMin = i;
		for (int j = i + 1; j < n; j++)
		{
			if (A[j] < A[iMin])
				iMin = j;
		}
		int temp = A[i];
		A[i] = A[iMin];
		A[iMin] = temp;
	}
}
int main()
{
	int n;
	cout << "enter the size of array:\n";
	cin >> n;
	int* A = (int*)malloc(sizeof(int) * n);
	cout << "enter the array elements:\n";
	for (int i = 0; i < n; i++)
		cin >>A[i];
	SelectionSort(A, n);
	cout << "\nsorted array is:\n";
		for (int i = 0; i < n; i++)
			cout <<A[i]<<" ";
}