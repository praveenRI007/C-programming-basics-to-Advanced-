#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node* link;
};
Node* top = NULL;
void Push(int x)
{
	Node* temp = (Node*)malloc(sizeof(Node*));
	temp->data = x;
	temp->link = top;
	top = temp;
}
void Pop()
{
	Node* temp;
	if (top == NULL) return;
	temp = top;
	top = top->link;
	free(temp);
}
void Print()
{
	Node* temp1 = top;
	while (temp1 != NULL) {
		cout << temp1->data;
		temp1 = temp1->link;
	}
}
int main() {
	Push(1); Print();
	cout << "\n";
	Push(2); Print();
	cout << "\n";
	Push(3); Print();
	cout << "\n";
	Push(4); Print();
	cout << "\n";
	Pop(); Print();
}