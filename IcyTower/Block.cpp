#include "Block.h"

Block::Block() {} // has to be kept or error
Block::Block(int spriteYLevel)
{
	sprite.setTexture(textures.blockTexture);
	this->spriteYLevel = spriteYLevel;
	createAndSetBlockSize();
	createAndSetBlockPos();
}


void Block::createAndSetBlockSize()
{
	srand(std::chrono::high_resolution_clock::now().time_since_epoch().count());
	spriteWidth = minSpriteWidth + rand() % (maxSpriteWidth - minSpriteWidth);
	sprite.setTextureRect(sf::IntRect(0, 0, spriteWidth, textureHeight));
}

void Block::createAndSetBlockPos()
{
	srand(std::chrono::high_resolution_clock::now().time_since_epoch().count());
	float y = spriteYLevel;
	float x = minDistanceFromEdge + rand() % (WINDOW_WIDTH - spriteWidth - 2*minDistanceFromEdge);
	sprite.setPosition(sf::Vector2f{ x,y });
}

sf::Sprite Block::getSprite()
{
	return sprite;
}
sf::Vector2f Block::getPos()
{
	return sprite.getPosition();
}

int Block::getWidth()
{
	return spriteWidth;
}
int Block::getHeight()
{
	return spriteHeight;
}

void Block::setSize(int width, int height)
{
	spriteHeight = height;
	spriteWidth = width;

}
void Block::setPos(float x, float y)
{
	sprite.setPosition(x, y);
}