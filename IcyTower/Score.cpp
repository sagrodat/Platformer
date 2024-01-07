#include "ScoreNumbers.h"
ScoreNumbers::ScoreNumbers()
{
	loadTextures();
}
void ScoreNumbers::loadTextures()
{
	for (int i = 0; i < 10; i++)
	{
		numbers[i].setTexture(textures.scoreTexture);
		numbers[i].setTextureRect(sf::IntRect(i * numberWidth, 0, numberWidth, numberHeight));
	}
}

sf::Sprite ScoreNumbers::getSpriteNumber(int number)
{
	return numbers[number];
}


int ScoreNumbers::getNumberWidth() { return numberWidth; }
int ScoreNumbers::getNumberHeight() {return numberHeight;}
