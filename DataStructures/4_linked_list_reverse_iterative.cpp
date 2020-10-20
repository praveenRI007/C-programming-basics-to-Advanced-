#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node* next;
};
Node* head;
void Reverse()
{
	Node *current,*prev,*next;
	current = head;
	prev = NULL;
	while (current != NULL) {
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
}
void Print() {
	Node* temp = head;
	cout << "list is: ";
	while (temp != NULL) {
		cout << temp->data;
		temp = temp->next;
		//cout << head->data << "\t";
		//head = head->next;
	}
	cout << "\n";
}
void Insert(int X)
{
	Node* temp = (Node*)malloc(sizeof(Node));
	temp->data = X;
	temp->next = head;
	head = temp;

}
int main() {
	head = NULL;
	Insert(2);
	Insert(4);
	Insert(6);
	Insert(5);
	Print();
	Reverse();
	Print();
}
