/*

int arr1[100];
reserves memory for 100 integers. Arrays are a useful approach to data storage, but they have a
serious drawback: We must know at the time we write the program how big the array will be.
We can’t wait until the program is running to specify the array size. The following approach
won’t work:

cin >> size; // get size from user
int arr[size]; // error; array size must be a constant
The compiler requires the array size to be a constant.

But in many situations we don’t know how much memory we need until runtime. We might
want to store a string that was typed in by the user, for example. In this situation we can define
an array sized to hold the largest string we expect, but this wastes memory. (As we’ll learn in
Chapter 15, “The Standard Template Library,” you can also use a vector, which is a sort of
expandable array.)

*/

//The new Operator

// newintro.cpp
// introduces operator new
#include <iostream>
#include <cstring> //for strlen
using namespace std;
int main()
{
	char* str = "Idle hands are the devil's workshop.";
	int len = strlen(str); //get length of str
	char* ptr; //make a pointer to char
	ptr = new char[len + 1]; //set aside memory: string + ‘\0’
	strcpy(ptr, str); //copy str to new memory area ptr
	cout << "ptr = " << ptr << endl; //show that ptr is now in str
	delete[] ptr; //release ptr’s memory
	return 0;
}
/*
The expression
ptr = new char[len+1];
returns a pointer to a section of memory just large enough to hold the string str, whose length
len we found with the strlen() library function, plus an extra byte for the null character ‘\0’
at the end of the string

Deleting the memory doesn’t delete the pointer that points to it (str in NEWINTRO), and doesn’t
change the address value in the pointer. However, this address is no longer valid; the memory
it points to may be changed to something entirely different. Be careful that you don’t use
pointers to memory that has been deleted.
The brackets following delete indicate that we’re deleting an array. If you create a single
object with new, you don’t need the brackets when you delete it.

ptr = new SomeClass; // allocate a single object
. . .
delete ptr; // no brackets following delete
If your program reserves many chunks of memory using new, eventually all the available memory will be reserved and the system will crash. To ensure safe and efficient use of memory, the
new operator is matched by a corresponding delete operator that returns memory to the operating system. In NEWINTRO the statement
delete[] ptr;

However, don’t forget the brackets when deleting arrays of objects. Using them ensures that all
the members of the array are deleted, and that the destructor is called for each one.
*/
