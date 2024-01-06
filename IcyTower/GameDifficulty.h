#pragma once
#include "SFMLObjects.h"
#include "Blocks.h"
class GameDifficulty
{
public :
	int secondsPerDifficulty = 1;
	int difficultyLevel = 1;

	void increase();
};
inline GameDifficulty gameDifficulty;