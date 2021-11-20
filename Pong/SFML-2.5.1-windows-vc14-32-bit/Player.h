#include <SFML/Graphics.hpp>

class Player : public sf::Texture {
    sf::Texture texture;
    if (!texture.loadFromFile(""))
        return 0;
    sf::Sprite player(texture);
};