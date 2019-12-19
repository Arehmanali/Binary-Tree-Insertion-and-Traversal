#pragma once
#include"cNode.h"

class cTree
{
	cNode* root;
	int count;
public:
	cTree();
	cTree(cNode*& ptr);
	cTree& insert(cNode*& ptr);
	void printPreOrder(cNode* ptr);
	void printPostOrder(cNode* ptr);
	void printInOrder(cNode* ptr);
	void printReverseTree(cNode* ptr);
	cNode* getRoot()const;
	int getMaxDegree();
	int getLevel();
	~cTree();
};

