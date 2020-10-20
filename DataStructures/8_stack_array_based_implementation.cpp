#include<iostream>
using namespace std;
#define MAX_SIZE  101

int A[MAX_SIZE];
int top = -1;
void Push(int x) {
	if (top == MAX_SIZE - 1) {
		cout << "error: stack oveflow";
		return;
	}
	A[++top] = x;
}
void pop() {
	if (top == -1) {
		cout << "error: no element to pop";
		return;
	}
	top--;
}
int Top() {
	return A[top];
}
void Print() {
	cout << "stack: ";
	for (int i = 0; i <= top; i++)
		cout << A[i];
	cout << "\n";
}
int main()
{
	Push(2); Print();
	Push(5); Print();
	Push(10); Print();
	pop(); Print();
	Push(12); Print();
}