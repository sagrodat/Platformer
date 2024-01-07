#include "Player.h"

void Player::decreaseSpeedLeft()
{
	if (speedX < 0)
	{
		increaseSpeedRight();
	}
	else
	{
		speedX = 0;
		isMovingLeft = false;
	}
}

void Player::decreaseSpeedRight()
{
	if (speedX > 0)
	{
		increaseSpeedLeft();
	}
	else
	{
		speedX = 0;
		isMovingRight = false;
	}
}

void Player::increaseSpeedLeft()
{
	if (speedX > -topSpeedX)
	{
		speedX -= accelerationX * deltaTime.asSeconds();
	}
}

void Player::increaseSpeedRight()
{
	if (speedX < topSpeedX)
	{
		speedX += accelerationX * deltaTime.asSeconds();
	}
}


bool Player::hasPlayerJumped()
{
	return isJumping;
}

void Player::initiateJump()
{
	if (!isJumping && speedY == game.getSpeed())
	{
		setJumpingTexture();
		isJumping = true;
		speedY = -jumpStartSpeed;
	}
}

void Player::terminateJump()
{
	setRestingTexture();
	speedY = game.getSpeed();
	isJumping = false;

}

void Player::continueJump()
{
	int blockBelow = isRightOverBlock();
	if (isRightOverBlock() != -1 && isFallingDown())
	{
		this->setPos(getPos().x, blocks.getBlocks()->at(blockBelow).getPos().y - getPlayerSize().y);
		terminateJump();
	}
	else
	{
		speedY += accelerationY * deltaTime.asSeconds();
	}
}


