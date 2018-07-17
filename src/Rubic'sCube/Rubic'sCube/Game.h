#pragma once
#include "Rubic'sCube.h"

class Game
{
public:
	void fGameLoop();
	template <typename a, typename b, typename c, typename d>
	char UpRotatingByClockwise(a firstColor, b secondColor, c thirdColor, d fourthColor);

public:
	Game();
	virtual ~Game();
};