#include "stdafx.h"
#include "Game.h"

Game::Game()
{
	/*cout << "Front: " << endl; RubicsCube Blue_side('B'); cout << endl;
	cout << "Up:    " << endl; RubicsCube Yellow_side('Y'); cout << endl;
	cout << "Left:  " << endl; RubicsCube Red_side('R'); cout << endl;
	cout << "Back:  " << endl; RubicsCube Orange_side('O'); cout << endl;
	cout << "Right: " << endl; RubicsCube Green_side('G'); cout << endl;
	cout << "Down:  " << endl; RubicsCube White_side('W'); cout << endl;*/
}


void Game::fGameLoop()
{
	RubicsCube Blue_side('B');
	RubicsCube Green_side('G');
	RubicsCube Orange_side('O');
	RubicsCube Red_side('R');
	UpRotatingByClockwise(Blue_side.array_cube_color, Green_side.array_cube_color, Orange_side.array_cube_color, Red_side.array_cube_color);
	UpRotatingByClockwise(Blue_side.array_cube_color, Green_side.array_cube_color, Orange_side.array_cube_color, Red_side.array_cube_color);
	Blue_side.get_Cube_side();
}

template <typename a, typename b, typename c, typename d>
char UpRotatingByClockwise(a firstColor, b secondColor, c thirdColor, d fourthColor)
{
	system("cls");
	RubicsCube cubes_number;
	int number = cubes_number.get_number_of_cubes();
	char Result;
	int tempArr[3][3]{};
	for (int i = 0; i < 3; i++)
		tempArr[0][i] = firstColor[0][i]

	
	for (int i = 0; i < number; i++)
	{
		firstColor[0][i]  = secondColor[0][i];
		secondColor[0][i] = thirdColor[0][i];
		thirdColor[0][i]  = fourthColor[0][i];
		fourthColor[0][i] = tempArr[0][i];
	}
	
	return firstColor;
}

Game::~Game()
{
	cout << "Destructor, Game!" << endl;
}