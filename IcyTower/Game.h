#pragma once
#include "SFMLObjects.h"
class Game
{
private:
	bool hasStarted = false;
	float pixelsMovedInFrame;

public :
	int score = 0;
	float blocksSpeed = 300;
	float maxBlocksSpeed = 435;
	
public :
	bool hasGameStarted();
	void startGame();
	int getSpeed();

	void setPixelsMovedInFrame(float amount);
	float getPixelsMovedInFrame();
};
inline Game game;