
// malloc , calloc , realloc ---> allocate block of memory
// free -----> deallocate block of memory
#include<iostream>
using namespace std;
int main() {
	int a;
	int* p;
	p = (int*)malloc(sizeof(int));
	*p = 10;
	free(p);
	p = (int*)malloc(sizeof(int)*5); // p[5] 5 block of each int size is allocated in heap

	int b;
	int* P;
	p = new int;
	*P = 10;
	delete P;
	p = new int[5];
	delete[] P;
	
}