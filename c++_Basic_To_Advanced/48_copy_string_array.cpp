// strcopy1.cpp
// copies a string using a for loop
#include <iostream>
#include <cstring> //for strlen()
using namespace std;
int main()
{ //initialized string
	char str1[] = “Oh, Captain, my Captain!“
		“our fearful trip is done”;
	char str3[] = “Tiger, tiger, burning bright\n”
		“In the forests of the night”;
	const int MAX = 80; //size of str2 buffer
	char str2[MAX]; //empty string
	for (int j = 0; j < strlen(str1); j++) //copy strlen characters
		str2[j] = str1[j]; // from str1 to str2
	str2[j] = ‘\0’; //insert NULL at end
	cout << str2 << endl; //display str2
// EASY WAY
	const int MAX2 = 80; //size of str2 buffer
	char str4[MAX2]; //empty string
	strcpy(str4, str3); //copy str1 to str2
	cout << str4 << endl; //display str2
	return 0;
}

/*

// straray.cpp
// array of strings
#include <iostream>
using namespace std;
int main()
{
const int DAYS = 7; //number of strings in array
const int MAX = 10; //maximum size of each string
//array of strings
char star[DAYS][MAX] = { “Sunday”, “Monday”, “Tuesday”,
“Wednesday”, “Thursday”,
“Friday”, “Saturday” };
for(int j=0; j<DAYS; j++) //display every string
cout << star[j] << endl;
return 0;
}

*/
