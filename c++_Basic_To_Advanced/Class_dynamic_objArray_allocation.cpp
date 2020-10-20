#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class student
{
	int roll;
	string name;
	string address;
public:
	void get_info() {
		cout << "enter your roll no.:\t";
		cin >> roll;
		cout << "\nenter your name:\t";
		cin>>name;
		cout << "\nenter your address:\t";
		getline(cin, address, '$');
	}
	void display_info() {
		cout << roll << setw(4);
		cout << name << setw(15);
		cout << address << setw(30) << endl;
	}
	int get_roll(int, student);
};
int student::get_roll(int i, student s) {
	return s.roll;
}

int main() {
	int N;
	int r;
	char option;
	cout << "enter the no. of students data you want to enter\n";
	cin >> N;
	student* S = new student[N];
	for (int i = 0; i < 3; i++) {
		cout << "ENTER THE DATA OF STUDENT :\t" << i + 1 << endl;
		S[i].get_info();
	}
	do {
		cout << "enter the roll number of student you want to get details of:\t";
		cin >> r;
		for (int i = 0; i < 3; i++) {
			if (S[i].get_roll(i, S[i]) == r)
				S[i].display_info();
		}
		cout << "do you want to get detail of another student:(y/n)\t";
		cin >> option;
	} while (option != 'n');
	return 0;
}