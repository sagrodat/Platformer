#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Constants.h"
#include <Windows.h>
#include "SFMLObjects.h"
#include "drawing.h"
#include "Block.h"
#include "Game.h"
#include "GameDifficulty.h"
#include "Background.h"
#include "ScoreNumbers.h"

int main()
{
    // player texture
    // add game over
    // add reset

    window.setFramerateLimit(144);
    generalClock.restart();
    gameDurationClock.restart();

    for (int i = 0; i < blocks.getNumberOfBlocksAhead(); i++)
    {
        blocks.createNextBlock();
    }

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            if (event.type == sf::Event::KeyReleased)
            {
                switch (event.key.code)
                {
                case sf::Keyboard::A:
                    player.isMovingLeft = true;
                    break;
                case sf::Keyboard::D:
                    player.isMovingRight = true;
                    break;
                    
                }
            }
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
            player.increaseSpeedLeft();
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
            player.increaseSpeedRight();
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
        {
            if (!game.hasGameStarted())
                game.startGame();

            player.initiateJump();
        }
        
           

        player.updatePosition();
        player.updateScore();
        player.updateNumberOfBlocksBasedOnPlayerPosition();
        blocks.updatePosition();
        deltaTime = generalClock.restart();
        if (player.getPos().y > WINDOW_HEIGHT)
            game.endGame();

        if (game.hasGameStarted())
        {
            gameDifficulty.increase();
            background.updateBackground();
        }

        

        window.clear();
        myDraw();
        window.display();
    }
   
    return 0;
}