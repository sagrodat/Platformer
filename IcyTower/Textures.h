#pragma once
#include "SFML/Graphics.hpp"
#include "AssetsPath.h"

class Textures {
public:
    Textures();

    sf::Texture blockTexture;
    std::string blockTexturePath = assetsPath.concatenate("images\\Block.png");

    sf::Texture playerRestingTexture;
    std::string playerRestingTexturePath = assetsPath.concatenate("images\\guyresting.png");

    sf::Texture playerJumpingTexture;
    std::string playerJumpingTexturePath = assetsPath.concatenate("images\\guyjumping.png");

    sf::Texture playerPreparingToJumpTexture;
    std::string playerPreparingToJumpTexturePath = assetsPath.concatenate("images\\guypreparingtojump.png");

    sf::Texture scoreTexture;
    std::string scoreTexturePath = assetsPath.concatenate("images\\numbers.png");

    sf::Texture backgroundTexture;
    std::string backgroundTexturePath = assetsPath.concatenate("images\\background.png");

    sf::Texture endGameTexture;
    std::string endGameTexturePath = assetsPath.concatenate("images\\endgame.png");
};

inline Textures textures;
