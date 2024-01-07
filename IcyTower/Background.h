#pragma once
#include "SFML/Graphics.hpp"
#include "Textures.h"
#include "SFMLObjects.h"
#include "Game.h"
#include "Player.h"
class Background
{
public :
	Background();
	void updateBackground();
	void manageBackgroundSprites();
	void updatePositions();
	std::vector<sf::Sprite>* getBackgroundSprites();
	sf::Sprite originalSprite;
	std::vector<sf::Sprite> * backgroundSprites;
	int backgroundHeight = WINDOW_HEIGHT;
	int backgroundsAhead = 2;
	int backgroundsBehind = 2;
	int nextBackgroundY = 0;

};
inline Background background;