#include "stdafx.h"
#include <iostream>
#include <functional>
#include "Node.h"
#include "Grid.h"
#include "Problem.h"
#include <queue>
#include <stdlib.h>     /* srand, rand */
#include <time.h>
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
	//Node<pair<int, int>> root = {};
	//vector<string> actions;

	// new keyword assign a space on the heap and
	//all it can return is an address(so new = use pointer)
	//Problem<pair<int, int>>* problem = new Problem<pair<int, int>>(root,actions);
	//genericSearch(*problem,PrintSomething);
	//genericSearch([]() { cout << "Hello again!" << endl; });
	
	Grid* x = new Grid();
	(*x).genGrid();
	(*x).printGrid();

	// m7dsh yl9y l gy da mhma 7sl

	/*char o = (char)178;
	char r = (char)240;
	char p1 = (char)169;
	char p2 = (char)170;
	char t1 = (char)175;
	char t2 = (char)174;
	
	cout << o << o << "   " << (char)240 << r << "   " << p1 << p2 << "   " << ".." << "   " <<t1<<t2 << endl;
	cout << "x " <<"   "<<"x " <<"   "<<"x "<<"   "<< "x "<<"   "<<"x "<< endl;
	*/ 
}

