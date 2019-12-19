#include<iostream>
#include"cTree.h"
using namespace std;
int main()
{
	cNode* c1, * c2, * c3, * c4, * c5,*c6;
	c1 = new cNode(20);
	c2 = new cNode(15);
	c3 = new cNode(24);
	c4 = new cNode(18);
	c5 = new cNode(22);
	c6 = new cNode(16);
	cTree t;
	t.insert(c3);
	t.insert(c2);
	t.insert(c1);
	t.insert(c4);
	t.insert(c5);
	t.insert(c6);
	cout << "\nTree after preOrder Traversal:";
	t.printPreOrder(t.getRoot());
	cout << "\n";
	cout << "\nTree after InOrder Traversal:";
	t.printInOrder(t.getRoot());
	cout << "\n";
	cout << "\nTree after postOrder Traversal:";
	t.printPostOrder(t.getRoot());
	cout << "\n";
	cout << "Root of The Tree is: " << t.getRoot()->getData() << endl;
	cout << "Maximum Degree of the Tree is: " << t.getMaxDegree() << endl;
	cout << "Level of the Tree is: " << t.getLevel() << endl;
	return 0;
	system("pause");
}
