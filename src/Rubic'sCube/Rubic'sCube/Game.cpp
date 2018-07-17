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
	RubicsCube Front_side	('B');
	RubicsCube Up_side		('Y');
	RubicsCube Right_side	('R');
	RubicsCube Back_side	('G');
	RubicsCube Left_side	('O');
	RubicsCube Down_side	('W');

	UpRotatingByClockwise(Front_side.array_cube_color, Left_side.array_cube_color, Back_side.array_cube_color, Right_side.array_cube_color, Up_side.array_cube_color);
	RightRotatingByAntiClockWise(Up_side.array_cube_color, Back_side.array_cube_color, Front_side.array_cube_color, Down_side.array_cube_color, Right_side.array_cube_color);

	cout << "Front: " << endl;		Front_side.get_Cube_side();		cout << endl;
	cout << "Up:    " << endl;		Up_side.   get_Cube_side();		cout << endl;
	cout << "Left:  " << endl;		Left_side. get_Cube_side();		cout << endl;
	cout << "Back:  " << endl;		Back_side. get_Cube_side();		cout << endl;
	cout << "Right: " << endl;		Right_side.get_Cube_side();		cout << endl;
	cout << "Down:  " << endl;		Down_side. get_Cube_side();		cout << endl;
}

template <typename a, typename b, typename c, typename d, typename e>
void Game::UpRotatingByClockwise(a FrontColor, b LeftColor, c backColor, d rightcolor, e upcolor)
{
	system("cls");
	
	for (int i = 0; i < 3; i++)
		tempArr[0][i] = FrontColor[0][i];	//сохранил позицию Up сайда верхней грани.

	//данный цикл, запускает поворот грани по часовой стрелке
	for (int i = 0; i < number; i++)
	{
		FrontColor[0][i] = rightcolor[0][i];
		rightcolor[0][i] = backColor[0][i];
		backColor[0][i] = LeftColor[0][i];
		LeftColor[0][i] = tempArr    [0][i];
	}

	//cохранил текущее положение Up сайда
	for (int i = 0; i < number; i++)
	{
		temp1up[0][i] = upcolor[0][i]; //верхняя полоса
		temp2up[i][2] = upcolor[i][2]; //правая полоса
		temp3up[2][i] = upcolor[2][i]; //левая полоса
		temp4up[i][0] = upcolor[i][0]; //нижняя полоса
	}
	
	//изменение позиционирования цветов на Up сайде.
	for (int i = 0; i < number; i++)
	{
		upcolor[i][2] = temp1up[0][i]; // из верхней в правую
		upcolor[i][0] = temp2up[i][2]; // из правой в нижнюю
		upcolor[2][i] = temp4up[i][0]; //из нижней в левую
		upcolor[0][i] = temp3up[2][i]; //из левой в верхнюю
	}
}

template <typename a, typename b, typename c, typename d, typename e>
void Game::RightRotatingByAntiClockWise(a UpColor, b backColor, c FrontColor, d DownColor, e rightColor)
{
	system("cls");

	for (int i = 0; i < 3; i++)
		tempArr[i][2] = UpColor[i][2];	//сохранил позицию Up сайда верхней грани.

											//данный цикл, запускает поворот грани по часовой стрелке
	for (int i = 0; i < number; i++)
	{
		UpColor[i][2] = FrontColor[i][2];
		FrontColor[i][2] = DownColor[i][2];
		DownColor [i][2] = backColor [i][2];
		backColor[i][2] = tempArr[i][2] ;
	}

	//cохранил текущее положение Up сайда
	for (int i = 0; i < number; i++)
	{
		temp1right[0][i] = rightColor[0][i]; //верхняя полоса
		temp2right[i][2] = rightColor[i][2]; //правая полоса
		temp3right[2][i] = rightColor[2][i]; //левая полоса
		temp4right[i][0] = rightColor[i][0]; //нижняя полоса
	}

	//изменение позиционирования цветов на Up сайде.
	for (int i = 0; i < number; i++)
	{
		rightColor[i][2] = temp1right[0][i]; // из верхней в правую
		rightColor[i][0] = temp2right[i][2]; // из правой в нижнюю
		rightColor[2][i] = temp3right[i][0]; //из нижней в левую
		rightColor[0][i] = temp4right[2][i]; //из левой в верхнюю
	}
}

Game::~Game()
{
	//cout << "Destructor, Game!" << endl;
}