#include "stdafx.h"
#include "Problem.h"

State<ii> Problem::transition(State<ii>  st, string action) {
	cout << "transition ON" << endl;
	State<ii> * next_state = NULL;
	return *next_state;
}

Problem::Problem()
{
	Node * root = NULL;
	State<pair<int, int>> initState;
	vector <string> actions;


}


Problem::~Problem()
{
}
