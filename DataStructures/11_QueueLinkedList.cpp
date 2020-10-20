#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node* next;
};
Node* front = NULL;
Node* rear = NULL;
void Enqueue(int x)
{
	Node* temp = (Node*)malloc(sizeof(Node));
	temp->data = x;
	temp->next = NULL;
	if (front == NULL && rear == NULL) {
		front = rear = temp;
		return;
	}
	rear->next = temp;
	rear = temp;
}
void Dequeue() {
	Node* temp = front;
	if (front == NULL) return;
	if (front == rear) {
		front = rear = NULL;
	}
	else {
		front = front->next;
	}
	free(temp);
}
void Print() {
	Node* temp = front;
	while (temp != NULL) {
		cout << temp->data<<"\t";
		temp = temp->next;
	}
	cout << "\n";
}
int main()
{
	Enqueue(1); Print();
	Enqueue(2); Print();
	Enqueue(3); Print();
	Enqueue(4); Print();
	Enqueue(5); Print();
	Dequeue(); Print();
	Dequeue(); Print();
	Dequeue(); Print();
	Dequeue(); Print();
	Dequeue(); Print();
}