//game 


#include "Game.h"




int main(void)
{

	
	sf::Time tm; //


	sf::RenderWindow window(sf::VideoMode(800, 800), "PA9");

	window.setVerticalSyncEnabled(true);


	Guy player(10, sf::Color::Cyan, sf::Vector2f(window.getSize().x/2, window.getSize().y / 2)    );
	
	


	while (window.isOpen())
	{

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