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
	int objects_highest_percentage = 30;// maximum pecentage of presence of obstacles or rocks

	//Grid Initializing
	srand((unsigned int)(time(NULL)));
	printf("First number: %d\n", rand() % 100);
	int m = rand() % (higher_grid_bound - lower_grid_bound + 1) + lower_grid_bound;
	srand((unsigned int)(time(NULL)));
	int n = rand() % (higher_grid_bound - lower_grid_bound + 1) + lower_grid_bound;
	cout << "m = " << m << endl;
	cout << "n = " << n << endl;
	this ->gridCells =  vector<vector<int>> (m, vector<int>(n,0));

	//Agent Positioning
	srand((unsigned int)(time(NULL)));
	int agentAbsolutePosition = rand() % (m*n);
	this->agentPositionX = agentAbsolutePosition / n;
	this->agentPositionY = agentAbsolutePosition % n;
	cout << "agentAbsolutePosition = " << agentAbsolutePosition << endl;
	cout << "agentXPosition = " << agentPositionX << endl;
	cout << "agentYPosition = " << agentPositionY << endl;
	cout << "" << endl;


	int absolutePosition;
	//Teleportal Positioning
	srand((unsigned int)(time(NULL)));
	while (true) {
		absolutePosition = rand() % (m*n);
		if (absolutePosition != agentAbsolutePosition) {
			this->gridCells[absolutePosition / n][absolutePosition%n] = 4;
			break;
		                                                         }

	             }

	int random_percentage;
	int random_number;
	//Obstacle Positioning
	srand((unsigned int)(time(NULL)));
	random_percentage = rand() % (objects_highest_percentage - objects_lowest_percentage + 1) + objects_lowest_percentage;
	random_number = (ceil)(random_percentage*0.01*m*n);
	cout << "obstacle random percentage = " << random_percentage << endl;
	cout << "obstacle random number = " << random_number << endl;
	cout << "" << endl;

	while (random_number) {
		srand((unsigned int)(time(NULL)));
		absolutePosition = rand() % (m*n);
		if (!this->gridCells[absolutePosition / n][absolutePosition%n] && absolutePosition != agentAbsolutePosition) {
			random_number--;
			this->gridCells[absolutePosition / n][absolutePosition%n] = 1;
		                                                                                                             }
	                               }

	// Rocks, Pads Positioning
	srand((unsigned int)(time(NULL)));
	random_percentage = rand() % (objects_highest_percentage - objects_lowest_percentage + 1) + objects_lowest_percentage;
	random_number = (ceil)(random_percentage*0.01*m*n);
	this->remainingPressurePads = random_number;
	cout << "rock/pad random percentage = " << random_percentage << endl;
	cout << "rock/pad random number = " << random_number << endl;
	cout << "" << endl;

	//Rock Positioning
	for (int counter = 0; counter < 2; counter++) {
		while (random_number) {
			srand((unsigned int)(time(NULL)));
			absolutePosition = rand() % (m*n);
			if (!this->gridCells[absolutePosition / n][absolutePosition%n] && absolutePosition != agentAbsolutePosition) {
				random_number--;
				this->gridCells[absolutePosition / n][absolutePosition%n] = counter + 2;
			                                                                                                             }
		                      }
		random_number = this->remainingPressurePads;
	                                              }

	// Print the List , Visualize tl3t boolean 3nd omran , msh zy m7na fkreen enaha function bt print l current state of a map :@
	for (int i = 0; i<this->gridCells.size(); i++) {
		for (int j = 0; j<this->gridCells[i].size(); j++) {
			cout << this->gridCells[i][j] << " ";
		}
		cout << "" << endl;
	}
}

Grid::Grid()
{
	genGrid();
}


Grid::~Grid()
{
}
