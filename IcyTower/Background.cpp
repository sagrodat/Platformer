#include "Background.h"

Background::Background()
{
	originalSprite.setTexture(textures.backgroundTexture);
	backgroundSprites = new std::vector<sf::Sprite>;
	
	sf::Sprite firstBackground = originalSprite;
	sf::Sprite secondBackground = originalSprite;
	secondBackground.setPosition(sf::Vector2f(0, WINDOW_HEIGHT - 2 * backgroundHeight));
	backgroundSprites->push_back(firstBackground);
	backgroundSprites->push_back(secondBackground);

	
}

void Background::updateBackground()
{
	updatePositions();
	manageBackgroundSprites();
}
void Background::manageBackgroundSprites()
{
	int playerY = player.getPos().y;
	int backgroundThePlayerIsAt = -1;

	for (int i = 0; i < backgroundSprites->size(); i++)
	{
		if (playerY > backgroundSprites->at(i).getPosition().y && playerY < backgroundSprites->at(i).getPosition().y + backgroundHeight)
		{
			backgroundThePlayerIsAt = i;
			break;
		}
	}


	if (backgroundThePlayerIsAt == backgroundSprites->size() - 1)
	{
		for (int i = 0; i < backgroundsAhead; i++)
		{
			sf::Sprite nextBackground = backgroundSprites->back();
			nextBackground.setPosition(sf::Vector2f(0, nextBackground.getPosition().y - backgroundHeight));
			backgroundSprites->push_back(nextBackground);
		}
		for (int i = backgroundThePlayerIsAt - backgroundsBehind ; i >= 0; i--)
		{
			backgroundSprites->erase(backgroundSprites->begin());
		}
	}
}
void Background::updatePositions()
{
	for (int i = 0; i < backgroundSprites->size(); i++)
	{
		sf::Vector2f curPos = backgroundSprites->at(i).getPosition();
		backgroundSprites->at(i).setPosition(curPos.x, curPos.y + gameInfo.getSpeed() * deltaTime.asSeconds());
	}
	
}
std::vector<sf::Sprite>* Background::getBackgroundSprites() { return backgroundSprites; }