#pragma once
#include "SFMLObjects.h"
#include "Textures.h"
#include <iostream>
class GameInfo
{
private:
	bool hasStarted = false;
	float pixelsMovedInFrame;
	sf::Sprite endGameScreen;

public:
	int score = 0;
	float blocksSpeed = 300;
	float maxBlocksSpeed = 435;


	int endGameScreenWidth = 400;
	int endGameScreenHeight = 200;

public:
	bool hasGameStarted();
	void startGame();
	int getSpeed();
	void endGame();
	void displayEndGameScreen();
	void startNewGame();


	void setPixelsMovedInFrame(float amount);
	float getPixelsMovedInFrame();
	void setSpeed(int speed);
};
inline GameInfo gameInfo;