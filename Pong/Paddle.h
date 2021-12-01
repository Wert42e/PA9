#pragma once

#include <SFML/Graphics.hpp>


class Paddle : public sf::RectangleShape
{
public:
	Paddle(const sf::Vector2f& newSize, 
		const sf::Color& newColor,
		const sf::Vector2f& newPosition) : 
		sf::RectangleShape(newSize)
	{
		this->setPosition(newPosition);
		this->setFillColor(newColor);
	}



private:


};