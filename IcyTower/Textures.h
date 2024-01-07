#pragma once
#include "SFML/Graphics.hpp"
class Textures {
public :
	Textures();
	sf::Texture blockTexture;
	std::string blockTexturePath = "E:\\INFORMATYKA\\PROGRAMOWANIE\\PROJEKTY\\W trakcie\\IcyTower\\assets\\Block.png";

	sf::Texture playerRestingTexture;
	std::string playerRestingTexturePath = "E:\\INFORMATYKA\\PROGRAMOWANIE\\PROJEKTY\\W trakcie\\IcyTower\\assets\\guyresting.png";
	sf::Texture playerJumpingTexture;
	std::string playerJumpingTexturePath = "E:\\INFORMATYKA\\PROGRAMOWANIE\\PROJEKTY\\W trakcie\\IcyTower\\assets\\guyjumping.png";
	sf::Texture playerPreparingToJumpTexture; // currently unused
	std::string playerPreparingToJumpTexturePath = "E:\\INFORMATYKA\\PROGRAMOWANIE\\PROJEKTY\\W trakcie\\IcyTower\\assets\\guypreparingtojump.png";
	
	sf::Texture scoreTexture;
	std::string scoreTexturePath = "E:\\INFORMATYKA\\PROGRAMOWANIE\\PROJEKTY\\W trakcie\\IcyTower\\assets\\numbers.png";

	sf::Texture backgroundTexture;
	std::string backgroundTexturePath = "E:\\INFORMATYKA\\PROGRAMOWANIE\\PROJEKTY\\W trakcie\\IcyTower\\assets\\background.png";
};
inline Textures textures;