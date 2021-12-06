#pragma once

#include "Gun.h"
#include "Header.h"

//plant to inherat from this to create "player" and "enemy" class 
//will contain life, points on death, could have other stuff


class Guy : 
	public sf::CircleShape
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

