#include<iostream>
using namespace std;
struct Node {
	int data;
	Node* next;
};
Node* head;
void Insert(int X)
{
	Node* temp = (Node*)malloc(sizeof(Node));
	temp->data = X;
	temp->next = head;
	head = temp;
	
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
void Delete(int n) {
	Node* temp1 = head;
	if (n == 1) {
		head = temp1->next;
		delete temp1;
		return;
	}
	int i;
	for (i = 0; i < n - 2; i++)
		temp1 = temp1->next; //temp1 points to n-1.th node
	Node* temp2 = temp1->next;//nth node
	temp1->next = temp2->next; //n+1.th node
	delete temp2;
}
int main() {
	head = NULL;
	Insert(2);
	Insert(4);
	Insert(6);
	Insert(5);
	Print();
	int n;
	cout << "enter a position\n";
	cin >> n;
	Delete(n);
	Print();
}
