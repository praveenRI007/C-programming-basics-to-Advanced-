#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node* next;
};
void Print(Node* p)
{
	if (p == NULL) {
		cout << "\n";
		return;
	}
		
	//cout << p->data; 
	Print(p->next);
	//Print(p->next);  
	cout<<p->data; //to print in reverse

}
Node* Insert(Node* head, int X)
{
	Node* temp = (Node*)malloc(sizeof(Node));
	temp->data = X;
	temp->next = head;
	head = temp;
	return head;
}
int main() {
	Node* head = NULL;
	head = Insert(head, 2);
	head = Insert(head, 4);
	head = Insert(head, 5);
	head = Insert(head, 6);
	Print(head);
}