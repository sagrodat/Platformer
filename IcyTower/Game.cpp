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


void Game::endGame()
{
	game.setSpeed(0);
    displayEndGameScreen();
}

void Game::setSpeed(int speed)
{
	game.blocksSpeed = speed;
}

void Game::displayEndGameScreen()
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

            if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
                int mX = sf::Mouse::getPosition(window).x;
                int mY = sf::Mouse::getPosition(window).y;
                std::cout << mX << " " << mY << std::endl;
                if (mX > startNewGameButtonX && mX < startNewGameButtonX + startNewGameButtonWidth
                    && mY > startNewGameButtonY && mY < startNewGameButtonY + startNewGameButtonHeight)
                    startNewGame();
            }
        }
    }
}

void Game::startNewGame()
{
    player = new Player
}