// MindTap 19.04
// Write the function singleParent that returns 
// the number of nodes in a binary tree that have only one child.
// Add this function to the class binaryTreeType 
// and create a program to test this function. 

//Data: 65 55 22 44 61 19 90 10 78 52 -999

#include <iostream>
#include "binarySearchTree.h"

using namespace std;

int main()
{
	bSearchTreeType<int>  treeRoot;

	int num;

	cout << "Enter integers ending with -999" << endl;
	cin >> num;

	while (num != -999)
	{
		treeRoot.insert(num);
		cin >> num;
	}

	cout << endl << "Tree nodes in inorder: ";
	treeRoot.inorderTraversal();
	cout << endl;

	cout << "Tree Height: " << treeRoot.treeHeight()
		<< endl;
	cout << "Number of single Parents: "
		<< treeRoot.singleParent() << endl;

	cout << endl;

	return 0;
}