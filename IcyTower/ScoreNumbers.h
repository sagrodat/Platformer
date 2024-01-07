#pragma once
#include "SFML/Graphics.hpp"
#include "Textures.h"
class ScoreNumbers
{
private :
	sf::Sprite numbers[10];
	int numberWidth = 50;
	int numberHeight = 50;
public :
	ScoreNumbers();
	void loadTextures();
	sf::Sprite getSpriteNumber(int number);
	int getNumberWidth();
	int getNumberHeight();

};
inline ScoreNumbers scoreNumbers;