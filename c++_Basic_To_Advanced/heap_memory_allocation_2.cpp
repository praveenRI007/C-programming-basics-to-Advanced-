// malloc , calloc , realloc ---> allocate block of memory
// free -----> deallocate block of memory
#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "enter size of array\n";
	cin >> n;
	int* A = (int*)malloc(n * sizeof(int));
	//int* A = (int*)calloc(n ,sizeof(int)); // all elements in array are initialised to '0' value whereas malloc initialises garbage
	for (int i = 0; i < n; i++) {
		A[i] = i + 1;
	}
	//free(A); //now A[] conatains garbage values
	int* B = (int*)realloc(A,  2*n*sizeof(int));
	//int* B = (int*)realloc(A,0); //equivalent to free(A)
	cout << "  previous block address:" << A;
	cout << "\nnew block address:" << B;
	for (int i = 0; i < 2*n; i++) {
		cout << A[i]<<"\t";
	}

}