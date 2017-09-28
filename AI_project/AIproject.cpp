#include "stdafx.h"
#include <iostream>
#include <functional>
#include "Node.h"
#include "Problem.h"
#include <queue>
using namespace std;


void genericSearch(Problem problem,function<void()> QingFunc) {
	queue<Node> q;
	q.push(problem.root);
	QingFunc();
}

void PrintSomething() {
	cout << "Hello!" << endl;
}

int main()
{
	
	Problem* problem = new Problem();
	genericSearch(*problem,PrintSomething);
	//genericSearch([]() { cout << "Hello again!" << endl; });
}

