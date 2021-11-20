#include <SFML/Graphics.hpp>

class Player : public sf::Sprite {
public:
	void update();
};

void Player::update() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
		this->move(0, -1)
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
		this->move(0, 1)
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
		this->move(1, 0)
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
		this->move(-1, 0)
	}
}