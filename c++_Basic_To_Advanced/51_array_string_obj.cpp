//sstrass.cpp
//defining and assigning string objects
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s1("Man"); //initialize
	string s2 = "Beast"; //initialize
	string s3;
	
	string full_name, nickname, address;
	string greeting("Hello, ");

	s3 = s1; //assign
	cout << "s3 = " << s3 << endl;
	s3 = "Neither " + s1 + " nor "; //concatenate
	s3 += s2; //concatenate
	cout << "s3 = " << s3 << endl;
	s1.swap(s2); //swap s1 and s2
	cout << s1 << " nor " << s2 << endl;
	
	cout << "Enter your full name : ";
	getline(cin, full_name); //reads embedded blanks
	cout << "Your full name is : " << full_name << endl;
	cout << "Enter your nickname : ";
	cin >> nickname; //input to string object
	greeting += nickname; //append name to greeting
	cout << greeting << endl; //output: "Hello, Jim"
	cout << "Enter your address on separate lines\n";
	cout << "Terminate with '$'\n";
	getline(cin, address, '$'); //reads multiple lines
	cout << "Your address is : " << address << endl;

	return 0;


	
}