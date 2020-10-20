#include<iostream>
using namespace std;
int fib(int);
int  last ;
int main() {
	int N,i=0;
	cout << "enter the no of fibonnaci elements u wanna get\t:";
	cin >> N;
	while (i < N) {
		cout<<" "<<fib(i);
		i++;
	}
	
	return 0;

}
int fib(int N)
{
	if (N == 0 || N == 1) 
		return N;
	else
	 return fib(N - 1) + fib(N - 2);
}