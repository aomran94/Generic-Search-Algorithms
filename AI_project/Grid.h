#pragma once
#include <vector>
using namespace std;
class Grid
{
public:
	
    vector<vector<int>> gridCells ; // 0 -> empty,   1 -> obstacle,   2 -> rock,  3 -> pressure pad,  4 -> teleportal
	int agentPositionX;
	int agentPositionY;
	int remainingPressurePads;
	void genGrid();
	Grid();
	~Grid();
};

