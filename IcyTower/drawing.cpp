#include "drawing.h"

void myDraw()
{
	window.draw(player.getSprite());

	for (Block block : *blocks.getBlocks())
		window.draw(block.getSprite());
}