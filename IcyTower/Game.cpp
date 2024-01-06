#include "Game.h"
bool Game::hasGameStarted()
{
	return this->hasStarted;
}
void Game::startGame()
{
	hasStarted = true;
}
int Game::getSpeed() { return this->blocksSpeed; }

void Game::setPixelsMovedInFrame(float amount) { this->pixelsMovedInFrame = amount; }
float Game::getPixelsMovedInFrame(){ return this->pixelsMovedInFrame; }


