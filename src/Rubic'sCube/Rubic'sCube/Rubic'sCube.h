#pragma once
#pragma once
//#include "stdafx.h"
#include <iostream>
using namespace std;

class Cube
{
	char cube_color;
	static const int number_of_cubes = 3;
	char array_cube_color[number_of_cubes][number_of_cubes]{};

private:
	void generate_cube_side();
	

public:
	Cube(char c);
	void get_Cube_side();
	~Cube();
};

