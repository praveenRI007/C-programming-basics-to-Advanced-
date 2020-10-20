// ptrto.cpp
// other access using pointers
#include <iostream>
using namespace std;
int main()
{
	int var1, var2; //two integer variables
	int* ptr; //pointer to integers
	ptr = &var1; //set pointer to address of var1
	*ptr = 37; //same as var1=37
	var2 = *ptr; //same as var2=var1
	cout << var2 << endl; //verify var2 is 37
	return 0;
}
/*

Remember that the asterisk used as the dereference operator has a different meaning than the
asterisk used to declare pointer variables. The dereference operator precedes the variable and
means value of the variable pointed to by. The asterisk used in a declaration means pointer to.

int* ptr; //declaration: pointer to int
*ptr = 37; //indirection: value of variable pointed to by ptr

Using the dereference operator to access the value stored in an address is called indirect
addressing, or sometimes dereferencing, the pointer.
Here’s a capsule summary of what we’ve learned so far:

int v; //defines variable v of type int
int* p; //defines p as a pointer to int
p = &v; //assigns address of variable v to pointer p
v = 3; //assigns 3 to v
*p = 3; //also assigns 3 to v


*/