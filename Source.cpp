#include<iostream>
#include"cTree.h"
using namespace std;
int main()
{
	cNode* c1, * c2, * c3, * c4, * c5;
	c1 = new cNode(20);
	c2 = new cNode(15);
	c3 = new cNode(24);
	c4 = new cNode(18);
	c5 = new cNode(22);
	cTree t;
	t.insert(c1);
	t.insert(c2);
	t.insert(c3);
	t.insert(c4);
	t.insert(c5);
	cout << "\nTree after preOrder Traversal:";
	t.printPreOrder(t.getRoot());
	cout << "\n";
	cout << "\nTree after InOrder Traversal:";
	t.printInOrder(t.getRoot());
	cout << "\n";
	cout << "\nTree after postOrder Traversal:";
	t.printPostOrder(t.getRoot());
	cout << "\n";
	return 0;
	system("pause");
}