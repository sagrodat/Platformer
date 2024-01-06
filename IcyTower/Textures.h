#pragma once
#include "SFML/Graphics.hpp"
class Textures {
public :
	Textures();
	sf::Texture blockTexture;
	std::string blockTexturePath = "E:\\INFORMATYKA\\PROGRAMOWANIE\\PROJEKTY\\W trakcie\\IcyTower\\assets\\Block.png";
};
inline Textures textures;