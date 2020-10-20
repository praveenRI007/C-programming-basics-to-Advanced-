// varaddr.cpp
// addresses of variables
#include <iostream>
using namespace std;
int main()
{
	int var1 = 11; //define and initialize
	int var2 = 22; //three variables
	int var3 = 33;
	cout << &var1 << endl; //print the addresses
 	cout << &var2 << endl; //of these variables
	cout << &var3 << endl;
	return 0;
}

/*
0x8f4ffff4 ← address of var1
0x8f4ffff2 ← address of var2
0x8f4ffff0 ← address of var3
*/