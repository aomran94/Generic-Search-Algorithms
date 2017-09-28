#pragma once
#include <string>
#include <vector>
#include <iostream>
using namespace std;
template <class stateType> class State
{
public:
	stateType inner;
	State() {};
	State(stateType inner) {this->inner =inner};
	~State() {};
};

