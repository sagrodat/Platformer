#include "Blocks.h"

Blocks::Blocks()
{

	blocksVector = new std::vector<Block>;
	Block floorBlock;
	floorBlock.setPos(0, WINDOW_HEIGHT);
	floorBlock.setSize(800, 50);
	blocksVector->push_back(floorBlock);
}

std::vector<Block>* Blocks::getBlocks()
{
	return blocksVector;
}

void Blocks::createNextBlock()
{
	blocksVector->push_back(*(new Block(blocksVector->back().getPos().y - gapBetweenLevels)));
}


void Blocks::updatePosition()
{
	if (!game.hasGameStarted())
		return;

	std::vector<Block> * bs = blocks.getBlocks();

	for (int i = 0; i < bs->size(); i++)
	{
		//float pixelsMoved = game.getSpeed() * deltaTime.asSeconds();
		//game.setPixelsMovedInFrame(pixelsMoved);
		bs->at(i).setPos(bs->at(i).getPos().x, bs->at(i).getPos().y + game.getSpeed() * deltaTime.asSeconds());
	}
	std::cout << std::endl;

}

int Blocks::getNumberOfBlocksBehind()
{
	return this->numberOfBlocksBehind;
}

int Blocks::getNumberOfBlocksAhead()
{
	return this->numberOfBlocksAhead;
}