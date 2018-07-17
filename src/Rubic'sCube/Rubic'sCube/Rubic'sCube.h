#pragma once
#include <iostream>
using namespace std;

class RubicsCube
{
	char cube_color;
	static const int number_of_cubes = 3;
	void generate_cube_side();
public: 
	char array_cube_color[number_of_cubes][number_of_cubes]{};

	RubicsCube();
	RubicsCube(char c);

	int get_number_of_cubes();
	

	void get_Cube_side();

	~RubicsCube();
};

