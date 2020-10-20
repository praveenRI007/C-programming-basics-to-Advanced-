#include<iostream>
using namespace std;
int factorial(int);
int main() {
	int n;
	cout << "enter the No. you want to get the factorial of:\n";
	cin >> n;
	cout<<"factorial is"<<n<<"!\t= "<<factorial(n);
}
int factorial(int n) {
	//int mul = 1;
	if (n == 0)
		return 1;
	else
		return factorial(n - 1) * n;
}