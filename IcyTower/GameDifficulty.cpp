#include "GameDifficulty.h"

void GameDifficulty::increase()
{
	if (gameDurationClock.getElapsedTime().asSeconds() > difficultyLevel * secondsPerDifficulty)
	{
		difficultyLevel++;
		if (Block::maxSpriteWidth > Block::smallestMaxSpriteWidth)
			Block::maxSpriteWidth -= 5;
		if (Block::minSpriteWidth > Block::smallestMinSpriteWidth)
			Block::minSpriteWidth -= 5;
		if (blocks.gapBetweenLevels < blocks.maxGapBetweenLevels)
			blocks.gapBetweenLevels += 5;
		if (game.blocksSpeed < game.maxBlocksSpeed)
			game.blocksSpeed += 5;
	}
}