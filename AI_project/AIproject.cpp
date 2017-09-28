#include "stdafx.h"
#include <iostream>
#include <functional>
#include "Node.h"
#include "Problem.h"
#include <queue>
using namespace std;


template <class stateType>
void genericSearch(Problem<stateType> problem,function<void()> QingFunc) {
	QingFunc();
}

void PrintSomething() {
	cout << "Hello!" << endl;
}

int main()
{
	Node<pair<int, int>> root = {};
	vector<string> actions;

	// new keyword assign a space on the heap and
	//all it can return is an address(so new = use pointer)
	Problem<pair<int, int>>* problem = new Problem<pair<int, int>>(root,actions);
	genericSearch(*problem,PrintSomething);
	//genericSearch([]() { cout << "Hello again!" << endl; });
	cout << "Hello" << endl;
}

