#pragma once

#include <SFML/Graphics.hpp>

class Ball : public sf::CircleShape
{
public:
	Ball(const double& newRadius, const sf::Color& newColor,
		const sf::Vector2f& newPosition) : 
		sf::CircleShape(newRadius)
	{
		this->setFillColor(newColor);
		this->setPosition(newPosition);
	}
		
private:
	// double mRadius;
};