#pragma once
#include "State.h"
template <class stateType>
class Node
{	

public:
	Node<stateType>* parent;
	int depth;
	double cost;
	stateType state;
	string action;

	Node(Node<stateType>, int, double, stateType, string) {
		this->parent = &parent;
		this->depth = depth;
		this->cost = cost;
		this->state = state;
		this->action = action;
	};
	Node() {};
	~Node() {};
};

