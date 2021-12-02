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




int main(void)
{

	
	sf::Time tm; //


	sf::RenderWindow window(sf::VideoMode(500, 500), "PA9");

	window.setVerticalSyncEnabled(true);


	Guy player(10, sf::Color::Cyan, sf::Vector2f(window.getSize().x/2, window.getSize().y / 2)    );
	
	


	while (window.isOpen())
	{


		sf::Event event; //?
		

		
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
			player.move(0, 1);
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

		}

		player.getGun().update();





		window.clear();

		window.draw(player);
		

		for (int i = 0; i < player.getGun().getBullets().size(); i++)
		{
			window.draw(player.getGun().getBullets()[i]);
		}

		
		window.display();
	}

	return 0;
}