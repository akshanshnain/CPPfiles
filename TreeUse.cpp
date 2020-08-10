#include <iostream>
#include <queue>
#include "TreeNode.h"
using namespace std;

TreeNode<int>* takeInputLevelWise() {
	int rootData;
	cout << "Enter root data" << endl;
	cin >> rootData;
	TreeNode<int>* root = new TreeNode<int>(rootData);

	queue<TreeNode<int>*> pendingNodes;
	
	pendingNodes.push(root);
	while (pendingNodes.size() != 0) {
		TreeNode<int>* front = pendingNodes.front();
		pendingNodes.pop();
		cout << "Enter num of children of " << front->data << endl;
		int numChild;
		cin >> numChild;
		for (int i = 0; i < numChild; i++) {
			int childData;
			cout << "Enter " << i << "th child of " << front->data << endl;
			cin >> childData;
			TreeNode<int>* child = new TreeNode<int>(childData);
			front->children.push_back(child);
			pendingNodes.push(child);
		}
	}
	return root;
}

TreeNode<int>* takeInput() {
	int rootData;
	cout << "Enter data" << endl;
	cin >> rootData;
	TreeNode<int>* root = new TreeNode<int>(rootData);
	
	int n;
	cout << "Enter num of children of " << rootData << endl;
	cin >> n;
	for (int i = 0; i < n; i++) {
		TreeNode<int>* child = takeInput();
		root->children.push_back(child);
	}
	return root;
}

void printTree(TreeNode<int>* root) {
	if (root == NULL) {
		return;
	}

	cout << root->data << ":";
	for (int i = 0; i < root->children.size(); i++) {
		cout << root->children[i]->data << ",";
	}
	cout << endl;
	for (int i = 0; i < root->children.size() ; i++) {
		printTree(root->children[i]);
	}
}

void printAtLevelK(TreeNode<int>* root, int k) {
	if (root == NULL) {
		return;
	}

	if (k == 0) {
		cout << root->data << endl;
		return;
	}

	for (int i = 0; i < root->children.size(); i++) {
		printAtLevelK(root->children[i], k - 1);
	}
}

int numNodes(TreeNode<int>* root) {
	if (root == NULL) {
		return 0;
	}
	int ans = 1;
	for (int i = 0; i < root->children.size(); i++) {
		ans += numNodes(root->children[i]);
	}
	return ans;
}
void postOrder(TreeNode<int>* root) {
   if(root == NULL){
       return;
   }
    
    for(int i = 0; i < root -> children.size() ; i++){
        postOrder(root -> children[i]);
        cout << " ";
    }
    cout << root -> data;
}
int sum(TreeNode<int>* root){
	int sum = root -> data;
	for(int i = 0; i< root -> children.size();i++){
		sum += root -> children[i] -> data;
	}
	return sum;
}
bool isIdentical(TreeNode<int> *root1, TreeNode<int> * root2) {
    int num1 = numNodes(root1);
    int num2 = numNodes(root2);
    if(root1 -> data == root2 -> data)
    {
        if(num1 == num2){
            return true;
        }
    }
    else
    {
        return false;
    }
    bool x;
	for(int i = 0; i < root1 -> children.size();i++){
        for(int j = 0 ; j < root2 -> children.size(); j++){
            x = isIdentical(root1 -> children[i] , root2 -> children[j]);
        }
    }
    return x;
}
int main() {
	/*TreeNode<int>* root = new TreeNode<int>(1);
	TreeNode<int>* node1 = new TreeNode<int>(2);
	TreeNode<int>* node2 = new TreeNode<int>(3);
	root->children.push_back(node1);
	root->children.push_back(node2);
	*/
cout << "Enter tree1" << endl;
	TreeNode<int>* root1 = takeInputLevelWise();
	cout << "Enter tree2" << endl;

	TreeNode<int>* root2 = takeInputLevelWise();
	//postOrder(root);
	cout << isIdentical(root1 , root2);
	// TODO delete the tree
}

