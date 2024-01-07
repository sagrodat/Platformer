#include "Player.h"


Player::Player()
{
	sprite.setTexture(textures.playerTexture);
	setStartPosition();
}

void Player::setStartPosition()
{
	setPos(0, WINDOW_HEIGHT - getPlayerSize().y);
}


int Player::isRightOverBlock()
{
	int distanceToClosestBlockBelow = INT_MAX;
	int indexOfBlockBelow = -1;

	std::vector<Block> * allBlocks = blocks.getBlocks();
	int playersFeetY = this->getPos().y + getPlayerSize().y;
	int playersFeetXCenter = this->getPos().x + (getPlayerSize().x / 2);

	for (int i = 0; i < allBlocks->size(); i++)
	{
		Block b = allBlocks->at(i);


		if (playersFeetY < b.getPos().y  || playersFeetY > b.getPos().y + b.getHeight())
			continue;

		if (playersFeetXCenter < b.getPos().x || playersFeetXCenter > b.getPos().x + b.getWidth())
			continue;

		int distanceBetweenPlayerAndBlock = b.getPos().y - (this->getPos().y + getPlayerSize().y);
		if (distanceBetweenPlayerAndBlock < distanceToClosestBlockBelow)
		{
			distanceToClosestBlockBelow = distanceBetweenPlayerAndBlock;
			indexOfBlockBelow = i;
		}
	}
	return indexOfBlockBelow;
}
bool Player::isFallingDown()
{
	return speedY > 0;
}
void Player::setOnBlock(int blockId)
{
	player.speedY = game.getSpeed();
	terminateJump();
}

void Player::updatePosition()
{
	
	if (hasPlayerJumped())
		continueJump();
	if (isMovingLeft)
		decreaseSpeedLeft();
	if (isMovingRight)
		decreaseSpeedRight();

	int blockBelow = isRightOverBlock();
	if (blockBelow != -1 && (isFallingDown() || !isJumping)) 
		setOnBlock(blockBelow);
	if (blockBelow == -1 && !isJumping) // falling off block
		speedY += accelerationY * deltaTime.asSeconds();


	sf::Vector2f curPos = getPos();
	if (!game.hasGameStarted())
		setPos(curPos.x + speedX * deltaTime.asSeconds(),curPos.y );
	if(game.hasGameStarted())
		setPos(curPos.x + speedX * deltaTime.asSeconds(), curPos.y + speedY * deltaTime.asSeconds());
}

void Player::updateNumberOfBlocksBasedOnPlayerPosition()
{
	int blockOn = isRightOverBlock();
	if (blockOn == -1)
		return;
	for (int i = blockOn - blocks.getNumberOfBlocksBehind(); i >= 0; i--)
	{
		blocks.getBlocks()->erase(blocks.getBlocks()->begin());
		lastPassedBlockIndex--;
	}
	while (blocks.getBlocks()->size() - blockOn < 5)
	{
		blocks.createNextBlock();
	}
}

void Player::updateScore()
{

	if (getPos().y < blocks.getBlocks()->at(lastPassedBlockIndex + 1).getPos().y)
	{
		score++;
		lastPassedBlockIndex++;
	}
}