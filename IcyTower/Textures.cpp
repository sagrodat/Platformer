#include "Textures.h"

Textures::Textures()
{
	blockTexture.loadFromFile(blockTexturePath);
	scoreTexture.loadFromFile(scoreTexturePath);

	playerRestingTexture.loadFromFile(playerRestingTexturePath);
	playerJumpingTexture.loadFromFile(playerJumpingTexturePath);
	playerPreparingToJumpTexture.loadFromFile(playerPreparingToJumpTexturePath);

	backgroundTexture.loadFromFile(backgroundTexturePath);
	endGameTexture.loadFromFile(endGameTexturePath);
}