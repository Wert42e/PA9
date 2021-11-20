// This example will use SFML libraries to implement
// the game of Pong

// History:  11/19 - Added paddle and ball movements (so
//                   far just down movements 's', down arrow.
//                   Also, added
//                   simple collision detection between
//                   p1Paddle and the ball.
//           11/17 - Implemented the class Ball and class Paddle.
//                   Continued to discuss how to design around
//                   the SFML classes.
//           11/15 - Started declaring the Ball class.
//           - Started from the SFML tutorial code that draws
//                a circle in the window.

#include <SFML/Graphics.hpp>

#include "Ball.h"
#include "Paddle.h"

int main()
{



	sf::RenderWindow window(sf::VideoMode(500, 500), 
		"SFML works!");
	sf::CircleShape shape(100.f);

	shape.setFillColor(sf::Color::Green);
	Ball gameBall(5, sf::Color::Cyan, sf::Vector2f(window.getSize().x/2, 
		window.getSize().y / 2));
	Paddle p1Paddle(sf::Vector2f(window.getSize().x/20, 
		window.getSize().y / 8), sf::Color::Red, 
		sf::Vector2f(0, 0));
	Paddle p2Paddle(sf::Vector2f(window.getSize().x / 20,
		window.getSize().y / 8), sf::Color::Red,
		sf::Vector2f(window.getSize().x - p1Paddle.getSize().x,
			0));
	int direction = -1;
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

			//if (event.type == sf::Event::KeyPressed)
			//{
			//	// which specific key was pressed?
			//	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
			//	{
			//		p1Paddle.move(0, 1);
			//	}
			//	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
			//	{
			//		p2Paddle.move(0, 1);
			//	}
			//}
		}

		gameBall.move(direction * 0.01, 0);

		// this detects a collision between
		// the ball and p1Paddle!
		if (gameBall.getGlobalBounds().intersects(
			p1Paddle.getGlobalBounds()))
		{
			direction *= -1;
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		{
			p1Paddle.move(0, 0.01);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		{
			p2Paddle.move(0, 0.01);
		}

		window.clear();

		window.draw(p1Paddle);
		window.draw(p2Paddle);
		window.draw(gameBall);
	//	window.draw(shape);
		window.display();
	}

	return 0;
}