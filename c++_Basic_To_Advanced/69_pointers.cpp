/*
: variables that
hold address values. We’ve seen variable types that store characters, integers, floating-point
numbers, and so on. Addresses are stored similarly. A variable that holds an address value is
called a pointer variable, or simply a pointer.

*/
// ptrvar.cpp
// pointers (address variables)
#include <iostream>
using namespace std;
int main()
{
	int var1 = 11; //two integer variables
	int var2 = 22;
	//cout << &var1 << endl; //print addresses of variables
	//cout << &var2 << endl;
	int* ptr; //pointer to integers
	ptr = &var1; //pointer points to var1
	cout << ptr << endl; //print pointer value
	cout << *ptr << endl;
	ptr = &var2; //pointer points to var2
	cout << ptr << endl; //print pointer value ie address
	cout << *ptr << endl;
	return 0;
}
/*

The program next defines a pointer variable in the line

int* ptr;

To the uninitiated this is a rather bizarre syntax. The asterisk means pointer to. Thus the statement defines the variable ptr as a pointer to int. This is another way of saying that this variable can hold the addresses of integer variables.
What’s wrong with the idea of a general-purpose pointer type that holds pointers to any data
type? If we called it type pointer we could write declarations like
pointer ptr;

The problem is that the compiler needs to know what kind of variable the pointer points to.
(We’ll see why when we talk about pointers and arrays.) The syntax used in C++ allows pointers to any type to be declared:

char* cptr; // pointer to char
int* iptr; // pointer to int
float* fptr; // pointer to float
Distance* distptr; // pointer to user-defined Distance class

char *ptr1, *ptr2, *ptr3; // three variables of type char*
or
char* ptr1, * ptr2, * ptr3; // three variables of type char*

*/