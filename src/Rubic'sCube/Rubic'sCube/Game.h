#pragma once
#include "Rubic'sCube.h"

class Game
{
	RubicsCube cubes_number;
	int number = cubes_number.get_number_of_cubes();
	char Result;
	int tempArr[3][3]{};
	int temp1up[3][3], temp2up[3][3], temp3up[3][3], temp4up[3][3], temp1right[3][3], temp2right[3][3], temp3right[3][3], temp4right[3][3];

private:
	
	template <typename a, typename b, typename c, typename d, typename e>
	void UpRotatingByClockwise(a firstColor, b secondColor, c thirdColor, d fourthColor, e fithColor);
	template <typename a, typename b, typename c, typename d, typename e>
	void RightRotatingByAntiClockWise(a firstColor, b secondColor, c thirdColor, d fourthColor, e fithColor);

public:
	Game();
	void fGameLoop();
	virtual ~Game();
};