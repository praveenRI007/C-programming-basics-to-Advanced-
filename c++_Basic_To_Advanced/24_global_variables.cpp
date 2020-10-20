// extern.cpp
// demonstrates global variables
#include <iostream>
using namespace std;
#include <conio.h> //for getch()
char ch = 'a'; //global variable ch
void getachar(); //function declarations
void putachar();
int main()
{
	while (ch != '\r') //main() accesses ch
	{
		getachar();
		putachar();
	}
	cout << endl;
	return 0;
}
//--------------------------------------------------------------
void getachar() //getachar() accesses ch
{
	ch = _getch();
}
//--------------------------------------------------------------
void putachar() //putachar() accesses ch
{
	cout << ch;
}
/*Lifetime and Visibility
Global variables have storage class static, which means they exist for the life of the program.
Memory space is set aside for them when the program begins, and continues to exist until the
program ends. You don’t need to use the keyword static when declaring global variables;
they are given this storage class automatically
*/