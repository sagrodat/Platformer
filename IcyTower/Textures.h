#pragma once
#include "SFML/Graphics.hpp"
class Textures {
public :
	Textures();
	sf::Texture blockTexture;
	std::string blockTexturePath = "E:\\INFORMATYKA\\PROGRAMOWANIE\\PROJEKTY\\W trakcie\\IcyTower\\assets\\Block.png";

	sf::Texture playerTexture;
	std::string playerTexturePath = "E:\\INFORMATYKA\\PROGRAMOWANIE\\PROJEKTY\\W trakcie\\IcyTower\\assets\\guy.png";
	
	sf::Texture scoreTexture;
	std::string scoreTexturePath = "E:\\INFORMATYKA\\PROGRAMOWANIE\\PROJEKTY\\W trakcie\\IcyTower\\assets\\numbers.png";

	sf::Texture backgroundTexture;
	std::string backgroundTexturePath = "E:\\INFORMATYKA\\PROGRAMOWANIE\\PROJEKTY\\W trakcie\\IcyTower\\assets\\background.png";
};
inline Textures textures;