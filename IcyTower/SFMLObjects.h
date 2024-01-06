#pragma once
#include <SFML\Graphics.hpp>
#include "Constants.h"
sf::Clock inline gameDurationClock;
sf::Clock inline generalClock;
sf::Time inline deltaTime;
sf::RenderWindow inline window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "IcyTower", sf::Style::Close);