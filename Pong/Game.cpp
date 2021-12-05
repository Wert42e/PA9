#include "Game.h"

Game::Game()
{
	initWin();
	
}

Game::~Game()
{
	delete window;
}

void Game::run()
{
	Guy player(10, sf::Color::Cyan, sf::Vector2f(window->getSize().x / 2, window->getSize().y / 2));


	while (window->isOpen())
	{

		// this detects a collision between
		// the ball and p1Paddle!

		/*if (player.getGlobalBounds().intersects(
			p1Paddle.getGlobalBounds()))
		{
			direction *= -1;
		}*/
		
		/*while (window->pollEvent(ev))
		{
			if (ev.type == sf::Event::KeyPressed)
		}*/

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





		window->clear();


		//draw function
		window->draw(player);
		

		for (int i = 0; i < player.getGun().getBullets().size(); i++)
		{
			window->draw(player.getGun().getBullets()[i]);
		}


		window->display();
	}

}



void Game::update()
{
}

void Game::render()
{
}

void Game::updatedt()
{
	dt = dClock.getElapsedTime().asSeconds();
}

void Game::initWin()
{
	window = new sf::RenderWindow(sf::VideoMode(800, 800), "PA9");
	window->setVerticalSyncEnabled(true);

}
