#pragma once

class cNode
{
	int data;		// data variable for node class
public:
	cNode* rightChild;		// point the address of right Child
	cNode* leftChild;		// point the address of left Child
	cNode();
	cNode(int d);
	void setData(int d);
	int getData();
	void print()const;
	~cNode();
};

