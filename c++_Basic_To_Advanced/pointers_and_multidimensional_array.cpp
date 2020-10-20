#include<iostream>
using namespace std;
int main() {
	int C[3][2][2] = { {{2,5},{7,9}},{{3,4},{6,1}},{{0,8},{11,13}} };
	cout << C;
	cout << *C;
	cout << C[0];
	cout << &C[0][0];
	cout << *(C[0][0] + 1);
}