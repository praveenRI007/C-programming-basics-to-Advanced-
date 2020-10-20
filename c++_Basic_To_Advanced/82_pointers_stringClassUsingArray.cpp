/*
The destructor in NEWSTR looks like this:
~String()
{
  cout << “Deleting str.”;
  delete[] str;
}
This destructor gives back to the system the memory obtained when the object was created.
You can tell from the program’s output that the destructor executed at the end of the program.
Objects (like other variables) are typically destroyed when the function in which they were
defined terminates. This destructor ensures that memory obtained by the String object will be
returned to the system, and not left in limbo, when the object is destroyed.
*/

// newstr.cpp
// using new to get memory for strings
#include <iostream>
#include <cstring> //for strcpy(), etc
//#include <string.h>
using namespace std;
////////////////////////////////////////////////////////////////
class String //user-defined string type
{
private:
	char* str; //pointer to string
public:
	String(char* s) //constructor, one arg
	{
		int length = strlen(s); //length of string argument
		str = new char[length + 1]; //get memory
		strcpy( str, s); //copy argument to it
	}
	~String() //destructor
	{
		cout << "Deleting str.\n";
		delete[] str; //release memory
	}
	void display() //display the String
	{
		cout << str << endl;
	}
};
////////////////////////////////////////////////////////////////
int main()
{ //uses 1-arg constructor
	String s1 = "Who knows nothing doubts nothing.";
	cout << "s1 = "; //display string
	s1.display();
	return 0;
}
/*
The output from this program is

s1=Who knows nothing doubts nothing.
Deleting str.

The String class has only one data item: a pointer to char called str. This pointer will point
to the string held by the String object. There is no array within the object to hold the string.
The string is stored elsewhere; only the pointer to it is a member of String

The constructor in this example takes a normal char* string as its argument. It obtains space in
memory for this string with new; str points to the newly obtained memory. The constructor
then uses strcpy() to copy the string into this new space.
*/