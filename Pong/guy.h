#pragma once

#include "Gun.h"


class Guy : public sf::CircleShape
{
public:
	Guy(const double& newRadius, const sf::Color& newColor,
		const sf::Vector2f& newPosition) :
		sf::CircleShape(newRadius)
	{
		this->setFillColor(newColor);
		this->setPosition(newPosition);
	}

	void firegun();

	Gun& getGun();


private:
	Gun pGun;

};

