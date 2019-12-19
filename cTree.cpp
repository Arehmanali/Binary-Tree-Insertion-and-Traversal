#include "cTree.h"
#include<iostream>
using namespace std;

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

void cTree::printReverseTree(cNode* ptr)
{
	if (!ptr)return;
	printReverseTree(ptr->rightChild);
	cout << ptr->getData() << " ";
	printReverseTree(ptr->leftChild);
}

cNode* cTree::getRoot()const
{
	return this->root;
}

int cTree::getMaxDegree()
{
	void getDegree(cNode * root, int& deg);
	int degree = 1;
	getDegree(root, degree);
	return degree;
}

void getDegree(cNode* root, int& deg)
{
	if (root)
	{
		if (root->leftChild && root->rightChild)
		{
			deg = 2;
		}
		getDegree(root->leftChild, deg);
		getDegree(root->rightChild, deg);
	}
}

int cTree::getLevel()
{
	void getlvl(cNode * root, int& lvl);
	int level = 0;
	getlvl(root, level);
	return level;
}

void getlvl(cNode* root, int& lvl)
{
	if (root)
	{
		getlvl(root->leftChild, lvl);
		getlvl(root->rightChild, lvl);
	}
}



cTree::~cTree()
{
}
