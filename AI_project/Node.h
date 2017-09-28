#pragma once
#include "State.h"
class Node
{	

public:
	Node *parent;
	int depth;
	double cost;
	State<pair<int,int>> state;
	string action;
	Node(Node*, int, double, State<pair<int,int>>, string);
	Node();
	~Node();
};

