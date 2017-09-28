#include "stdafx.h"
#include "Node.h"

Node::Node(Node* parent,int depth,double cost,State<pair<int,int>> state,string action)
{
	this->parent = parent;
	this->depth = depth;
	this->cost = cost;
	this->state = state;
	this->action = action;
}
Node::Node() {

}


Node::~Node()
{
	cout << "Node deallocated" << endl;
	
	
}
