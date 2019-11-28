#include "cTree.h"
#include<iostream>
using namespace std;

/* default constructor */
cTree::cTree()
{
	root = NULL;
	count = 0;
}

cTree::cTree(cNode*& ptr)
{
	root = ptr;
	root->leftChild = NULL;
	root->rightChild = NULL;
	count = 1;
}

cTree& cTree::insert(cNode*& ptr)
{
	if (!root)
	{
		root = ptr;
		root->leftChild = NULL;
		root->rightChild = NULL;
		ptr = NULL;
	}
	else
	{
		cNode* parent=NULL, * current = root;
		while (current != NULL)
		{
			parent = current;
			if (current->getData() <= ptr->getData())
			{
				current = current->rightChild;
			}
			else
			{
				current = current->leftChild;
			}
		}
		if (parent->getData() <= ptr->getData())
		{
			parent->rightChild = ptr;
			parent = parent->rightChild;
			parent->rightChild = parent->leftChild =ptr= NULL;
		}
		else
		{
			parent->leftChild = ptr;
			parent = parent->leftChild;
			parent->leftChild = parent->rightChild = ptr = NULL;
		}
	}
	ptr = NULL;
	count++;
	return *this;
	


	/*if (!root)
	{
		root = ptr;
		root->leftChild = NULL;
		root->rightChild = NULL;
		ptr = NULL;
	}
	else
	{
		cNode* current = root;
		if (current->getData() < ptr->getData())
		{
				while (ptr->getData()<current->getData())
				{
					current = current->rightChild;
				}
				current->rightChild = ptr;
				current = current->rightChild;
				current->rightChild = current->rightChild = ptr = NULL;
				//current->rightChild->rightChild =current->rightChild->leftChild= NULL;
				//ptr = NULL;
		}
		else
			{
				while (ptr->getData() > current->getData())
				{
					current = current->leftChild;
				}
				current->leftChild = ptr;
				current = current->leftChild;
				current->leftChild = current->rightChild = ptr = NULL;
				//current->leftChild->leftChild=current->leftChild->rightChild = NULL;
				//ptr = NULL;
			}
	}
	count++;
	return *this;
	*/
}


void cTree::printPreOrder(cNode* ptr)
{
	if (!ptr) return;
	cout << ptr->getData() << " ";
	printPreOrder(ptr->leftChild);
	printPreOrder(ptr->rightChild);
}

void cTree::printPostOrder(cNode* ptr)
{
	if (!ptr)return;
	printPostOrder(ptr->leftChild);
	printPostOrder(ptr->rightChild);
	cout << ptr->getData() << " ";
}

void cTree::printInOrder(cNode* ptr)
{
	if (!ptr)return;
	printInOrder(ptr->leftChild);
	cout << ptr->getData() << " ";
	printInOrder(ptr->rightChild);
}

cNode* cTree::getRoot()const
{
	return this->root;
}


cTree::~cTree()
{
}
