#include "stdafx.h"
#include "Grid.h"
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include <vector>
#include <math.h>
#include <iostream>

using namespace std;


void Grid:: genGrid() {
	int lower_grid_bound = 5; //minimum value of grid rows or column
	int higher_grid_bound = 10; // maximum value of grid rows or column (5od balak mn "or" msh "and" 3shan mt2ollesh 3amelha square)
	int objects_lowest_percentage = 10; //minimum percentage of presence of obstacles or rocks (5od balak mn "or" 3shan mt2ollesh meddehom nfs l arkam)
	int objects_highest_percentage = 15;// maximum pecentage of presence of obstacles or rocks
	srand((unsigned int)(time(NULL)));
	//Grid Initializing
	
	int m = rand() % (higher_grid_bound - lower_grid_bound + 1) + lower_grid_bound;
	int n = rand() % (higher_grid_bound - lower_grid_bound + 1) + lower_grid_bound;
	cout << "m = " << m << endl;
	cout << "n = " << n << endl;
	this ->gridCells =  vector<vector<int>> (m, vector<int>(n,0));

	//Agent Positioning
	int agentAbsolutePosition = rand() % (m*n);
	this->agentPositionX = agentAbsolutePosition / n;
	this->agentPositionY = agentAbsolutePosition % n;
	cout << "agentAbsolutePosition = " << agentAbsolutePosition << endl;
	cout << "agentXPosition = " << agentPositionX << endl;
	cout << "agentYPosition = " << agentPositionY << endl;
	cout << "" << endl;


	vector<int> objectOccurences = vector<int>(4, 1);
	int random_percentage = rand() % (objects_highest_percentage - objects_lowest_percentage + 1) + objects_lowest_percentage;
	objectOccurences[0] = (ceil)(random_percentage*0.01*m*n); //obstacles occurences

	cout << "obstacle random percentage = " << random_percentage << endl;
	cout << "obstacle random number = " << objectOccurences[0] << endl;
	cout << "" << endl;

	random_percentage = rand() % (objects_highest_percentage - objects_lowest_percentage + 1) + objects_lowest_percentage;
	objectOccurences[1]= (ceil)(random_percentage*0.01*m*n);  // Rocks occurences
	objectOccurences[2] = (ceil)(random_percentage*0.01*m*n); //Pads occurences
	cout << "rock/pad random percentage = " << random_percentage << endl;
	cout << "rock random number = " << objectOccurences[1] << endl;
	cout << "pad random number = " << objectOccurences[2] << endl;
	cout << "" << endl;

	int absolutePosition;

	for (int counter = 0; counter <= 3; counter++) {
		while (objectOccurences[counter]) {
			absolutePosition = rand() % (m*n);
			if (!this->gridCells[absolutePosition / n][absolutePosition%n] && absolutePosition != agentAbsolutePosition) {
				objectOccurences[counter]--;
				this->gridCells[absolutePosition / n][absolutePosition%n] = counter + 1;
			}
		}
	                                              }
}

void Grid::printGrid() {
	// Print the List , Visualize tl3t boolean 3nd omran , msh zy m7na fkreen enaha function bt print l current state of a map :@
	char o = (char)178;
	char r = (char)240;
	char p1 = (char)169;
	char p2 = (char)170;
	char t1 = (char)175;
	char t2 = (char)174;
	for (int i = 0; i<this->gridCells.size(); i++) {
		for (int j = 0; j<this->gridCells[i].size(); j++) {
			if (i == this->agentPositionX && j == this->agentPositionY)
				cout << "x ";
			else {
				if (!this->gridCells[i][j]) cout << "..";
				if (this->gridCells[i][j] == 1) cout << o << o;
				if (this->gridCells[i][j] == 2) cout << r << r;
				if (this->gridCells[i][j] == 3) cout << p1 << p2;
				if (this->gridCells[i][j] == 4) cout << t1 << t2;
			}
			cout << "   ";
		}
		cout << endl << endl;
	}
}

Grid::Grid()
{

}


Grid::~Grid()
{
}
