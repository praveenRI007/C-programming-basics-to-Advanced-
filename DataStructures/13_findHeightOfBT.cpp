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
bool Search(BstNode* root, int data) {
	if (root == NULL) return false;
	else if (root->data == data) return true;
	else if (data <= root->data) return Search(root->left, data);
	else return Search(root->right, data);

}
int FindMin(BstNode* root) {
	if (root == NULL) {
		cout << "error :Tree is empty\n";
		return -1;
	}
	while (root->left != NULL) {
		root = root->left;
	}
	return root->data;
}
int FindMax(BstNode* root) {
	if (root == NULL) {
		cout << "error :Tree is empty\n";
		return -1;
	}
	while (root->right != NULL) {
		root = root->right;
	}
	return root->data;
}
int maxDepth(BstNode* node)
{
	if (node == NULL)
		return 0;
	else
	{
		/* compute the depth of each subtree */
		int lDepth = maxDepth(node->left);
		int rDepth = maxDepth(node->right);

		/* use the larger one */
		if (lDepth > rDepth)
			return(lDepth + 1);
		else return(rDepth + 1);
	}
}
int main()
{
	BstNode* root = NULL;
	int data;
	char ch;
	cout << "enter the elements:\n";
	do
	{
		cin >> data;
		root = Insert(root, data);
		cout << "\n enter (y/n) for another element:\t";
		cin >> ch;
	} while (ch != 'n');
	int n;
	cout << "enter a number to be searched\n";
	cin >> n;
	if (Search(root, n) == true) cout << "Found\n";
	else cout << "Not Found\n";

	cout << "\n the minimum element in tree is:\t" << FindMin(root);
	cout << "\n the maximum element in tree is:\t" << FindMax(root);

	cout << "\n Height of tree is " << maxDepth(root);

}
