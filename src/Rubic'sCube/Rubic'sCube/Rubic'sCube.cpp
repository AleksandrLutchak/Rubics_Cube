// Rubic'sCube.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Rubic'sCube.h"

RubicsCube::RubicsCube() {}

RubicsCube::RubicsCube(char c)
{
	cube_color = c;
	for (int i = 0; i < number_of_cubes; i++)
		for (int j = 0; j < number_of_cubes; j++)
			array_cube_color[i][j] = cube_color;
}

int RubicsCube::get_number_of_cubes()
{
	return number_of_cubes;
}

void RubicsCube::get_Cube_side()
{
	for (int i = 0; i < number_of_cubes; i++)
	{
		for (int j = 0; j < number_of_cubes; j++)
			cout << array_cube_color[i][j] << " ";
		cout << endl;
	}
}

void RubicsCube::generate_cube_side()
{
	for (int i = 0; i < number_of_cubes; i++)
		for (int j = 0; j < number_of_cubes; j++)
			array_cube_color[i][j] = cube_color;
}

RubicsCube::~RubicsCube()
{
	//cout << "Destructor, RubicsCube!" << endl;
	
}

