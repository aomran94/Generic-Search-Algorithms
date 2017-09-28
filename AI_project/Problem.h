#pragma once
#include <string>
#include "State.h"
#include "Node.h"

template <class stateType>
class Problem
{
public:
	Node<stateType> root;
	vector<string> actions;

	stateType transition(stateType, string) {};
	bool goalTest(stateType) {};
	double pathCost(stateType, string) {};

	Problem(Node<stateType> root, vector<string> actions) {
		this->root = root;
		this->actions = actions;
	};
	~Problem() {};
};

