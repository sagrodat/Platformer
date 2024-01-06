#include "Player.h"

sf::Vector2f Player::getPos() { return sprite.getPosition(); }
void Player::setPos(float x, float y)
{
	if (x + getPlayerSize().x > WINDOW_WIDTH)
		x = WINDOW_WIDTH - getPlayerSize().x;
	else if (x < 0)
		x = 0;

	sf::Vector2f pos{ x,y };
	sprite.setPosition(pos);
}


sf::Sprite Player::getSprite() { return sprite; }

sf::Vector2i Player::getPlayerSize()
{
	return sf::Vector2i{ playerWidth,playerHeight };
}