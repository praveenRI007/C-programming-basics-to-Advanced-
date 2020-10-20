#include<iostream>
using namespace std;
struct Node {
	int data;
	Node* next;
};
 //Node* head;
Node* Insert(Node* head,int X)
{
	Node* temp = (Node*)malloc(sizeof( Node));
	temp->data = X;
	temp->next = head;
	head = temp;
	return head;
}
void print(Node* head) {
	//Node* temp = head;
	cout << "list is: ";
	while (head != NULL) {
		//cout << temp->data;
		//temp = temp->next;
		cout << head->data<<"\t";
		head = head->next;
	}
	cout << "\n";
}
int main() {
	Node* head = NULL;
	int n, i, x;
	cout << "how many numbers?\n";
	cin >> n;
	for (i = 0; i < n; i++) {
		cout << "enter the number\n";
		cin >> x;
		head  = Insert(head,x);
		print(head);
	}

}