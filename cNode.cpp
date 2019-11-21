#include "cNode.h"
#include<iostream>
using namespace std;


cNode::cNode()
{
	data = 0;
	leftChild = NULL;
	rightChild = NULL;
}

cNode::cNode(int d)
{
	data = d;
	leftChild = NULL;
	rightChild = NULL;
}


void cNode::setData(int d)
{
	this->data = d;
}

int cNode::getData()
{
	return this->data;
}

void cNode::print() const
{
	cout << "\n Data is:" << data;
}


cNode::~cNode()
{
}
