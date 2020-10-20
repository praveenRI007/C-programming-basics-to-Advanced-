// passarr.cpp
// array passed by pointer
#include <iostream>
using namespace std;
const int MAX = 5; //number of array elements
int main()
{
	void centimize(double*); //prototype
	double varray[MAX] = { 10.0, 43.1, 95.9, 59.7, 87.3 };
	centimize(varray); //change elements of varray to cm
	for (int j = 0; j < MAX; j++) //display new array values
		cout << "varray[" << j << "] = "
		<< varray[j] << " centimeters" << endl;
	return 0;
}
//--------------------------------------------------------------
void centimize(double* ptrd)
{
	for (int j = 0; j < MAX; j++)
		*ptrd++ *= 2.54; //ptrd points to elements of varray
}

/*
If a group of operators has right associativity, the compiler performs the operation on the right
side of the expression first, then works its way to the left. The unary operators such as * and ++
have right associativity, so the expression is interpreted as *(ptrd++), which increments the
pointer, not what it points to. That is, the pointer is incremented first and the dereference operator is applied to the resulting address.

*/