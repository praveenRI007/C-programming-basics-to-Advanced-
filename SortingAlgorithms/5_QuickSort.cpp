#include<iostream>
using namespace std;
int Partition(int* A, int start, int end) {
	int pivot = A[end];
	int partitionIndex = start;
	for (int i = start; i < end; i++) {
		if (A[i] <= pivot) {
			swap(A[i], A[partitionIndex]);
			partitionIndex++;
		}
	}
	swap(A[partitionIndex], A[end]);
	return partitionIndex;
}
void QuickSort(int* A, int start, int end) {
	if (start < end) {
		int partitionIndex = Partition(A, start, end);
		QuickSort(A, start, partitionIndex - 1);
		QuickSort(A, partitionIndex + 1,end);
	}
}
int main()
{
	int N;
	cout << "enter the array size:\n";
	cin >> N;
	int* A = (int*)malloc(sizeof(int) * N);
	cout << "\nenter the array elements:\n";
	for (int i = 0; i < N; i++)
		cin >> A[i];
	QuickSort(A, 0, N - 1);
	cout << "\nthe sorted array elements are:\n";
	for (int i = 0; i < N; i++)
		cout << A[i] << " ";
}
