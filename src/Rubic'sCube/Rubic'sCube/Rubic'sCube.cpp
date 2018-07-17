// Rubic'sCube.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Rubic'sCube.h"

Cube::Cube(char c)
{
	cube_color = c;
	generate_cube_side();
	get_Cube_side();
}

void Cube::get_Cube_side()
{
	for (int i = 0; i < number_of_cubes; i++)
	{
		for (int j = 0; j < number_of_cubes; j++)
			cout << array_cube_color[i][j] << " ";
		cout << endl;
	}
}

void Cube::generate_cube_side()
{
	for (int i = 0; i < number_of_cubes; i++)
		for (int j = 0; j < number_of_cubes; j++)
			array_cube_color[i][j] = cube_color;
}

Cube::~Cube()
{
	cout << "Destructor!" << endl;
}

