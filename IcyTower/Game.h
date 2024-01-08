#pragma once
#include "SFMLObjects.h"
#include "Textures.h"
#include <iostream>
class Game
{
private:
	bool hasStarted = false;
	float pixelsMovedInFrame;
	sf::Sprite endGameScreen;

public :
	int score = 0;
	float blocksSpeed = 300;
	float maxBlocksSpeed = 435;

	int startNewGameButtonX = 350;
	int startNewGameButtonY = 460;
	int startNewGameButtonWidth = 100;
	int startNewGameButtonHeight = 40;
	
	int endGameScreenWidth = 400;
	int endGameScreenHeight = 200;
	
public :
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
inline Game game;