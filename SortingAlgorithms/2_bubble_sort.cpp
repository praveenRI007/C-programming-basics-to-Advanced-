//BUBBLE SORT ------->O(O^2)
// ptrsort.cpp
// sorts an array using pointers
#include <iostream>
using namespace std;
int main()
{
	void bsort(int*, int); //prototype
	 int N ; //array size
	//test array
	//int arr[N] = { 37, 84, 62, 91, 11, 65, 57, 28, 19, 49 };
	cout << "enter array size:\n";
	cin >> N;
	int* arr = new int(N);
	cout << "\nenter elements of array:\n";
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	bsort(arr, N); //sort the array
	for (int j = 0; j < N; j++) //print out sorted array
		cout << arr[j] << " ";
	cout << endl;
	return 0;
}
//--------------------------------------------------------------
void bsort(int* ptr, int n)
{
	void order(int*, int*); //prototype
	int j, k; //indexes to array
	for (j = 0; j < n - 1; j++) //outer loop
		for (k = 0; k < n-j-1; k++) //inner loop starts at outer
			order(ptr + k, ptr + k + 1); //order the pointer contents
}
//--------------------------------------------------------------
void order(int* numb1, int* numb2) //orders two numbers
{
	if (*numb1 > * numb2) //if 1st larger than 2nd,
	{
		int temp = *numb1; //swap them
		*numb1 = *numb2;
		*numb2 = temp;
	}
}