#pragma once

class cNode
{
	int data;
public:
	cNode* rightChild;
	cNode* leftChild;
	cNode();
	cNode(int d);
	void setData(int d);
	int getData();
	void print()const;
	~cNode();
};

