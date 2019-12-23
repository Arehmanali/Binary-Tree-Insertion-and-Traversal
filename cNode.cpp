#include "cNode.h"
#include<iostream>
using namespace std;

/* Default constructor  */
cNode::cNode()
{
	data = 0;
	leftChild = NULL;
	rightChild = NULL;
}

/* constructor for setting the values of nodes */
cNode::cNode(int d)
{
	data = d;
	leftChild = NULL;
	rightChild = NULL;
}

/* set data function for setting the Node*/
void cNode::setData(int d)
{
	this->data = d;
}

/* getting function for getting the values of Node*/
int cNode::getData()
{
	return this->data;
}

/* print function for printing the values of  node*/
void cNode::print() const
{
	cout << "\n Data is:" << data;
}


cNode::~cNode()
{
}
