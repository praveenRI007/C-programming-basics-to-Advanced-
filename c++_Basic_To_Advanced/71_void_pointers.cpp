/*

Ordinarily, the address that you put in a pointer must be the same type as the pointer. You can’t
assign the address of a float variable to a pointer to int, for example:

float flovar = 98.6;
int* ptrint = &flovar; //ERROR: can’t assign float* to int*

However, there is an exception to this. There is a sort of general-purpose pointer that can point
to any data type. This is called a pointer to void, and is defined like this:

void* ptr; //ptr can point to any data type

Such pointers have certain specialized uses, such as passing pointers to functions that operate
independently of the data type pointed to.
The next example uses a pointer to void and also shows that, if you don’t use void, you must
be careful to assign pointers an address of the same type as the pointer

*/
// ptrvoid.cpp
// pointers to type void
#include <iostream>
using namespace std;
int main()
{
	int intvar; //integer variable
	float flovar; //float variable
	int* ptrint; //define pointer to int
	float* ptrflo; //define pointer to float
	void* ptrvoid; //define pointer to void
	ptrint = &intvar; //ok, int* to int*
	// ptrint = &flovar; //error, float* to int*
	// ptrflo = &intvar; //error, int* to float*
	ptrflo = &flovar; //ok, float* to float*
	ptrvoid = &intvar; //ok, int* to void*
	ptrvoid = &flovar; //ok, float* to void*
	return 0;
}
/*
If for some unusual reason you really need to assign one kind of pointer type to another, you
can use the reinterpret_cast. For the lines commented out in PTRVOID, that would look like
this:

ptrint = reinterpret_cast<int*>(flovar); // Static casts won’t work with pointers
ptrflo = reinterpret_cast<float*>(intvar);// Static casts won’t work with pointers
*/