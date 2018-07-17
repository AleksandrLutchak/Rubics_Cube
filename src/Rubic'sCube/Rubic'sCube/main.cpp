#pragma once
#include "stdafx.h"
#include "Rubic'sCube.h"
using namespace std;

void initialize_cubes();

void main()
{
	initialize_cubes();

}


void initialize_cubes()
{
	Cube Blue_side	('B'); cout << endl;
	Cube Yellow_side('Y'); cout << endl;
	Cube Red_side	('R'); cout << endl;
	Cube Orange_side('O'); cout << endl;
	Cube Green_side	('G'); cout << endl;
	Cube White_side	('W'); cout << endl;

	system("pause");
}