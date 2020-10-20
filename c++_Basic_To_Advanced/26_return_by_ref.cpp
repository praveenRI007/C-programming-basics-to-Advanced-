// retref.cpp
// returning reference values
#include <iostream>
using namespace std;
int x; // global variable
int& setx(); // function declaration
int main()
{ // set x to a value, using
	setx() = 92; // function call on left side
	cout << "x = " << x << endl; // display new value in x
	return 0;
}
//--------------------------------------------------------------
int& setx()
{
	return x; // returns the value to be modified
}
/*

More subtly, you can’t return a reference to a local variable:
int& setx()
{
int x = 3;
return x; // error
}

*/