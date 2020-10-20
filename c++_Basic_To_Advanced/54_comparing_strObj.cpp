/*
In the first part of the program the == and < operators are used to determine whether a name
typed by the user is equal to, or precedes or follows alphabetically, the name George. In the
second part of the program the compare() function compares only the first two letters of
“George” with the first two letters of the name typed by the user (userName). The arguments to
this version of compare() are the starting position in userName and the number of characters
to compare, the string used for comparison (aName), and the starting position and number of
characters in aName. Here’s some interaction with SSTRCOM:
Enter your first name: Alfred
You come before George
The first two letters of your name come before Ge
The first two letters of “George” are obtained using the substr() member function. It returns a
substring of the string for which it was called. Its first argument is the position of the substring,
and the second is the number of characters.
*/

//sstrcom.cpp
//comparing string objects
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string aName = "George";
	string userName;
	cout << "Enter your first name : ";
	cin >> userName;
	if (userName == aName) //operator ==
		cout << "Greetings, George\n";
	else if (userName < aName) //operator <
		cout << "You come before George\n";
	else
		cout << "You come after George\n";
	//compare() function
	int n = userName.compare(0, 2, aName, 0, 2);
	cout << "The first two letters of your name ";
	if (n == 0)
		cout << "match ";
	else if (n < 0)
		cout << "come before ";
	else
		cout << "come after ";
	cout << aName.substr(0, 2) << endl;
	return 0;
}