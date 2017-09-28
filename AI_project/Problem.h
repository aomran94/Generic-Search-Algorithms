#pragma once
#include <string>
#include "State.h"
#include "Node.h"
typedef pair<int, int> ii;
class Problem
{
public:
	Node root;
	State<ii> transition(State<ii>, string);
	bool goalTest(State<ii>);
	double pathCost(State<ii>,string);
	Problem();
	~Problem();
};

