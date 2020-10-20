/*A static local variable has the visibility of an automatic local variable (that is, inside the function containing it). However, its lifetime is the same as that of a global variable, except that it
doesn’t come into existence until the first call to the function containing it. Thereafter it
remains in existence for the life of the program.
*/
// static.cpp
// demonstrates static variables
#include <iostream>
using namespace std;
float getavg(float); //declaration
int main()
{
	float data = 1, avg;
	while (data != 0)
	{
		cout << "Enter a number : ";
		cin >> data;
		avg = getavg(data);
		cout << "New average is " << avg << endl;
	}
	return 0;
}
//--------------------------------------------------------------
// getavg()
// finds average of old plus new data
float getavg(float newdata)
{
	static float total = 0; //static variables are initialized
	static int count = 0; // only once per program
	count++; //increment count
	total += newdata; //add new data to total
	return total / count; //return the new average
}
/*When static variables are initialized, as total and count are in getavg(), the initialization
takes place only once—the first time their function is called. They are not reinitialized on subsequent calls to the function, as ordinary local variables are.

local variables and function arguments are stored on the stack,
while global and static variables are stored on the heap.

*/