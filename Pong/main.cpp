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

#include "Header.h"




int main()
{

	
	sf::Time tm; //


	sf::RenderWindow window(sf::VideoMode(500, 500), "PA9");

	window.setVerticalSyncEnabled(true);


	//sf::CircleShape shape(100.f);
	//shape.setFillColor(sf::Color::Green);
	
	Guy player(10, sf::Color::Cyan, sf::Vector2f(window.getSize().x/2, window.getSize().y / 2)    );
	
	


	/*Bullet p1Paddle(sf::Vector2f(window.getSize().x/20, window.getSize().y / 8), 
		sf::Color::Red, sf::Vector2f(0, 0));
	*/
	
	/*
	Bullet p2Paddle(sf::Vector2f(window.getSize().x / 20,window.getSize().y / 8),
		sf::Color::Red, sf::Vector2f(window.getSize().x - p1Paddle.getSize().x, 0));
	*/
	int direction = -1;
	while (window.isOpen())
	{

		sf::Texture playertexture;
		if (!texture.loadFromFile("images/tempPlayer.png")) {
			return 0;
		}
		Player player1(playertexture);

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
			//////	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
			//////	{
			//////		p2Paddle.move(0, 1);
			//////	}
			//}
			if (event.type == sf::Event::KeyPressed) {
				player1.update();
			}
		}

		//gameBall.move(direction * 0.01, 0);

		// this detects a collision between
		// the ball and p1Paddle!
		
		
		/*if (player.getGlobalBounds().intersects(
			p1Paddle.getGlobalBounds()))
		{
			direction *= -1;
		}*/

		//for bullets, create vector of bullets and pop on to it whenever a new one is created
		//then, create loop to update every part of vector at end
		//create condition on end to check if off screen and pop if so 
		//create a condition to only fire if time since last fire = some number


		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		{
			player.move(0, tm.asSeconds() * 1);
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		{
			player.move(0, -1);
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		{
			player.move(-1, 0);
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		{
			player.move(1, 0);
		}


		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
		{
			player.firegun();

			//player.move(0.05, 0);
		}





		//if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		//{
		//	p1Paddle.move(0, 0.01);
		//}
		//if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		//{
		//	p2Paddle.move(0, 0.01);
		//}


		player.getGun().update();





		window.clear();

		//window.draw(p1Paddle);
		//window.draw(p2Paddle);
		window.draw(player);
		
		
		//window.draw(shape);
	

		for (int i = 0; i < player.getGun().getBullets().size(); i++)
		{
			window.draw(player.getGun().getBullets()[i]);
		}

		
		window.display();
	}

	return 0;
}