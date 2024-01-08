#include "drawing.h"
void myDraw()
{
	for (sf::Sprite background : *background.getBackgroundSprites())
		window.draw(background);


	for (Block block : *blocks.getBlocks())
		window.draw(block.getSprite());

	window.draw(player.getSprite());


	drawScoreNumber(player.score);

}

void drawScoreNumber(int score)
{
	int tmp = score;
	int len = 0;
	while (tmp > 0)
	{
		tmp /= 10;
		len++;
	}
	int xPos = 0;
	for (int i = 1; i < len; i++)
	{
		xPos += scoreNumbers.getNumberWidth();
	}
	for (int i = 0; i < len; i++)
	{
		sf::Sprite toDrawCurrently = scoreNumbers.getSpriteNumber(score % 10);
		toDrawCurrently.setPosition(sf::Vector2f(xPos, toDrawCurrently.getPosition().y));
		window.draw(toDrawCurrently);
		xPos -= scoreNumbers.getNumberWidth();
		score /= 10;
	}
}	