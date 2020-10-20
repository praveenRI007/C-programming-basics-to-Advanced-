// table.cpp
// demonstrates simple function
#include <iostream>
using namespace std;
void starline(char ch); //function declaration
// (prototype)
int main()
{
	char ch;
	starline('*'); //call to function
	cout << "Data type Range" << endl;
	starline('*'); //call to function
	cout << "char - 128 to 127" << endl;
	cout << "short - 32, 768 to 32, 767" << endl;
	cout << "int System dependent" << endl;
	cout << "long - 2, 147, 483, 648 to 2, 147, 483, 647" << endl;
	starline('*'); //call to function
	return 0;
}
//--------------------------------------------------------------
// starline()
// function definition
void starline(char ch) //function declarator
{
	for (int j = 0; j < 45; j++) //function body
		cout << '*';
	cout << endl;
}