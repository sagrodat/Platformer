#pragma once
#include "Block.h"
class Blocks
{
private :
	std::vector<Block> * blocksVector;
	int numberOfBlocksAhead = 5;
	int numberOfBlocksBehind = 3;
public :
	int maxGapBetweenLevels = 375;
	int gapBetweenLevels = 300;

	Blocks();
	std::vector<Block> * getBlocks();
	void createNextBlock();
	void updatePosition();
	int getNumberOfBlocksBehind();
	int getNumberOfBlocksAhead();
};
inline Blocks blocks;