#pragma once
#include <string>
#include <vector>
#include <iostream>
using namespace std;
template <class stateType>
class State
{
public:
	stateType data;

	State() {};
	State(stateType data) {this->data = data};
	~State() {};
};

