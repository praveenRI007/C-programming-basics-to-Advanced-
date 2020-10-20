#include<iostream>
using namespace std;
int main() {
	int x = 5;
	int* p = &x;
	*p = 6;
	int** q = &p;
	int*** r = &q;
	cout << *p << "\n";
	cout << *q << "\n";
	cout << *(*q) << "\n";
	cout << *(*r) << "\n";
	cout << *(*(*r)) << "\n"; //cout<<***r; also correct
	***r = 10;
	cout << "x =" <<x<<"\n";
	**q = *p + 2;
	cout << "x  =" << x;
}