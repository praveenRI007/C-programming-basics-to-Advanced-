#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node* next;
};
Node* head;
void Reverse(Node* p) 
{
	if (p->next == NULL) {
		head = p;
		return;
   }
	Reverse(p->next);
	Node* q = p->next;
	q->next = p;
	p->next = NULL;
}
void Insert( int X)
{
	Node* temp = (Node*)malloc(sizeof(Node));
	temp->data = X;
	temp->next = head;
	head = temp;
	//return head;
}
void Print()
{
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
int main() {
	head = NULL;
	 Insert(2);
	 Insert(4);
	 Insert(5);
	 Insert(6);
	Print();
	cout << "\n";
	Reverse(head);
	Print();

}
