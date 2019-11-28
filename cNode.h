#pragma once

class cNode
{
	int data;		// data variable for node class
public:
	cNode* rightChild;		// point the address of right Child
	cNode* leftChild;		// point the address of left Child
	cNode();			// default constructor
	cNode(int d);			// parametric constructor
	void setData(int d);		// setter function for setting the data of node
	int getData();			// getter function for getting the data of nodes
	void print()const;		// print function for printing the data of nodes
	~cNode();			// destructor
};

