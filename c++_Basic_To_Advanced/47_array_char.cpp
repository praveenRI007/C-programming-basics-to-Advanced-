// strinit.cpp
// initialized string
#include <iostream>
using namespace std;
int main()
{
	char str[] = "Farewell!thou art too dear for my possessing.";
	cout << str << endl;
	return 0;
}

/*
char str[] = { ‘F’, ‘a’, ‘r’, ‘e’, ‘w’, ‘e’, ‘l’, ‘l’, ‘!’,’ ‘, ‘t’, ‘h’, ... and so on  and '\0' at last

// blanksin.cpp
// reads string with embedded blanks
#include <iostream>
using namespace std;
int main()
{
const int MAX = 80; //max characters in string
char str[MAX]; //string variable str
cout << “\nEnter a string: “;
cin.get(str, MAX); //put string in str
cout << “You entered: “ << str << endl;
return 0;
}

// linesin.cpp
// reads multiple lines, terminates on ‘$’ character
#include <iostream>
using namespace std;
const int MAX = 2000; //max characters in string
char str[MAX]; //string variable str
int main()
{
cout << “\nEnter a string:\n”;
cin.get(str, MAX, ‘$’); //terminate with $
cout << “You entered:\n” << str << endl;
return 0;
}

Now you can type as many lines of input as you want. The function will continue to accept
characters until you enter the terminating character (or until you exceed the size of the array).
Remember, you must still press Enter after typing the ‘$’ character.
*/
