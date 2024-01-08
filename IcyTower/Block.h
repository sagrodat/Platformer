#pragma once
#include "Constants.h"
#include <chrono>
#include "Textures.h"
#include "GameInfo.h"
#include <iostream>
#include "SFMLObjects.h"

class Block {
private :

	sf::Sprite sprite;

	int textureWidth = 800;
	int textureHeight = 50;

	

	int spriteWidth;
	int spriteHeight = 50;

	int minDistanceFromEdge = 50;
	int spriteYLevel = 600;
	
public :
	static const int smallestMaxSpriteWidth = 50;
	static const int smallestMinSpriteWidth = 50;
	static int minSpriteWidth;
	static int maxSpriteWidth;

public :
	Block();
	Block(int spriteYLevel);
	void createAndSetBlockSize();
	void createAndSetBlockPos();
	sf::Sprite getSprite();
	sf::Vector2f getPos();
	int getWidth();
	int getHeight();

	void setPos(float x, float y);
	void setSize(int x, int y);
};
inline int Block::minSpriteWidth = 200;
inline int Block::maxSpriteWidth = 400;

