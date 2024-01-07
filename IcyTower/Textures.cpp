#include "Textures.h"

Textures::Textures()
{
	blockTexture.loadFromFile(blockTexturePath);
	scoreTexture.loadFromFile(scoreTexturePath);
	playerTexture.loadFromFile(playerTexturePath);
	backgroundTexture.loadFromFile(backgroundTexturePath);
}