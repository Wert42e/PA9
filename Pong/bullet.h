#pragma once
#include <SFML/Graphics.hpp>


#include <iostream>
#include <string>
#include <fstream>
#include <vector>}
#include <ctime>

using std::getline;
using std::ofstream;
using std::ifstream;
using std::fstream;
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;


class Bullet : public sf::CircleShape
{
public:
	Bullet(const double& newRadius, const sf::Color& newColor,
		const sf::Vector2f& newPosition) :
		sf::CircleShape(newRadius)
	{
		this->setFillColor(newColor);
		this->setPosition(newPosition);
	}




private:


};



/*
Bullet(const sf::Vector2f& newSize,
		const sf::Color& newColor,
		const sf::Vector2f& newPosition) :
		sf::RectangleShape(newSize)
	{
		this->setPosition(newPosition);
		this->setFillColor(newColor);
	}

*/