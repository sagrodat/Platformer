#pragma once
#include "SFML/Graphics.hpp"
#include "Constants.h"
#include "SFMLObjects.h"
#include <iostream>
#include "Blocks.h"
#include "Textures.h"
class Player {
private :

	sf::Sprite sprite;
	const int playerWidth = 128;
	const int playerHeight = 128;
	
	float speedX = 0;
	float speedY = game.getSpeed();
	float topSpeedX = 1000;
	float accelerationX = 5000;
	float accelerationY = 3000;

	float jumpStartSpeed = 1250;

	int lastPassedBlockIndex = 0;

	bool hasStartedGame = false;

	void setStartPosition();

public :

	int score = 0;

	bool isMovingLeft = false;
	bool isMovingRight = false;
	bool isJumping = false;

	Player();

	//WORKERS
	void increaseSpeedLeft();
	void increaseSpeedRight();
	void decreaseSpeedLeft();
	void decreaseSpeedRight();
	void jump();
	void updatePosition();
	bool hasPlayerJumped();
	void initiateJump();
	void continueJump();
	void terminateJump();
	void updateNumberOfBlocksBasedOnPlayerPosition();
	void updateScore();

	//collision
	int isRightOverBlock();
	bool isFallingDown();
	void setOnBlock(int blockId);

	//SETTERS GETTERS
	void setPos(float x, float y);
	sf::Vector2f getPos();

	sf::Sprite getSprite();
	sf::Vector2i getPlayerSize();
};
inline Player player;