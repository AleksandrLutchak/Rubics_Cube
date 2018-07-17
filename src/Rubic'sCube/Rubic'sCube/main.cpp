#pragma once
#include "stdafx.h"
#include "Rubic'sCube.h"
using namespace std;

void GameFunk();

void main()
{
	GameFunk();
	
	system("pause");
}


void GameFunk()
{
	cout << "Front: " << endl; Cube Blue_side	('B'); cout << endl;
	cout << "Up:    " << endl; Cube Yellow_side	('Y'); cout << endl;
	cout << "Left:  " << endl; Cube Red_side	('R'); cout << endl;
	cout << "Back:  " << endl; Cube Orange_side	('O'); cout << endl;
	cout << "Right: " << endl; Cube Green_side	('G'); cout << endl;
	cout << "Down:  " << endl; Cube White_side	('W'); cout << endl;

	
}