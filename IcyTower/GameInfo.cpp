#include "GameInfo.h"
bool GameInfo::hasGameStarted()
{
    return this->hasStarted;
}

int GameInfo::getSpeed() { return this->blocksSpeed; }

void GameInfo::setPixelsMovedInFrame(float amount) { this->pixelsMovedInFrame = amount; }
float GameInfo::getPixelsMovedInFrame() { return this->pixelsMovedInFrame; }

void GameInfo::startGame()
{
    hasStarted = true;
}
void GameInfo::endGame()
{
    gameInfo.setSpeed(0);
    displayEndGameScreen();
}
void GameInfo::startNewGame()
{

}

void GameInfo::displayEndGameScreen()
{
    endGameScreen.setTexture(textures.endGameTexture);
    endGameScreen.setPosition(sf::Vector2f(WINDOW_WIDTH / 2 - endGameScreenWidth / 2, WINDOW_HEIGHT / 2 - endGameScreenHeight / 2));
    window.draw(endGameScreen);
    window.display();
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
    }
}

void GameInfo::setSpeed(int speed)
{
    gameInfo.blocksSpeed = speed;
}



