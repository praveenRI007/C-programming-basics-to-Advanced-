#include<iostream>
using namespace std;
struct BstNode
{
	int data;
	BstNode* left;
	BstNode* right;
};
BstNode* GetNewNode(int data) {
	BstNode* newNode = new BstNode();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}
BstNode* Insert(BstNode* root, int data) {
	if (root == NULL) {
		root = GetNewNode(data);
		return root;
	}
	else if (data <= root->data) {
		root->left = Insert(root->left, data);
	}
	else {
		root->right = Insert(root->right, data);
	}
	return root;
}
bool IsSubtreeLesser(BstNode* root,int value) {
	if (root == NULL) return true;
	if (root->data <= value && IsSubtreeLesser(root->left, value) && IsSubtreeLesser(root->right, value))
		return true;
	else
		return false;
}
bool IsSubtreeGreater(BstNode* root, int value){
	if (root == NULL) return true;
	if (root->data > value && IsSubtreeGreater(root->left, value) && IsSubtreeGreater(root->right, value))
		return true;
	else
		return false;
}
bool IsBinarySearchTree(BstNode* root)
{
	if (root == NULL) return true;
	if (IsSubtreeLesser(root->left, root->data) && IsSubtreeGreater(root->right, root->data) && IsBinarySearchTree(root->left) && IsBinarySearchTree(root->right))
		return true;
	else
		return false;
}

int main()
{
	BstNode* root = NULL;
	int data;
	char ch;
	/*
	root = Insert(root, 15);
	root = Insert(root, 10);
	root = Insert(root, 20);
	root = Insert(root, 25);
	root = Insert(root, 8);
	root = Insert(root, 12);
	*/
	cout << "enter the elements:\n";
	do
	{
		cin >> data;
		root = Insert(root, data);
		cout << "\n enter (y/n) for another element:\t";
		cin >> ch;
	} while (ch != 'n');



}
