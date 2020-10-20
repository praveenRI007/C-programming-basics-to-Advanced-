// copystr.cpp
// copies one string to another with pointers
#include <iostream>
using namespace std;
int main()
{
	void copystr(char*, const char*); //prototype
	char* str1 = "Self - conquest is the greatest victory.";
	char str2[80]; //empty string
	copystr(str2, str1); //copy str1 to str2
	cout << str2 << endl; //display str2
	return 0;
}//--------------------------------------------------------------
void copystr(char* dest, const char* src)
{
	while (*src) //until null character,
		*dest++ = *src++; //copy chars from src to dest
	*dest = '\0'; //terminate dest
}

/*

Library String Functions
Many of the library functions we have already used for strings have string arguments that are
specified using pointer notation. As an example you can look at the description of strcpy() in
your compiler’s documentation (or in the STRING.H header file). This function copies one string
to another; we can compare it with our homemade copystr() function in the COPYSTR example. Here’s the syntax for the strcpy() library 

function:
char* strcpy(char* dest, const char* src);

This function takes two arguments of type char*. The strcpy() function also returns a
pointer to char; this is the address of the dest string. In other respects, this function works
very much like our homemade copystr() function.

**********************************************************************

const int* cptrInt; //cptrInt is a pointer to constant int
int* const ptrcInt; //ptrcInt is a constant pointer to int

Following the first declaration, you cannot change the value of whatever cptrInt points to,
although you can change cptrInt itself. Following the second declaration, you can change
what ptrcInt points to, but you cannot change the value of ptrcInt itself. You can remember
the difference by reading from right to left, as indicated in the comments. You can use const in
both positions to make the pointer and what it points to constant.
*/