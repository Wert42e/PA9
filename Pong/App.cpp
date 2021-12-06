#include "App.h"

App::App()
{
	initWin();
	player = new Guy(10, sf::Color::Cyan, sf::Vector2f(window->getSize().x / 2, window->getSize().y / 2));
	//create guy in middle of screen
}

App::~App()
{
	delete window;
}

void App::run()
{
	while (window->isOpen())
	{
		updatedt();
		update();
		render();


	}



	///everything below here will be moved
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



void App::update()
{
	updateEven();



}

void App::render()
{
}

void App::updatedt()
{
	dt = dClock.restart().asSeconds();
}

void App::updateEven()
{
	while (window->pollEvent(ev))
	{
		if (ev.type == sf::Event::Closed)
		{
			window->close();
		}

		if (ev.type == sf::Event::Resized) //resizing
		{
			std::cout << "new width: " << ev.size.width << std::endl;
			std::cout << "new height: " << ev.size.height << std::endl;
		}

		//////////////////////////moving guy	



		if (ev.key.code == sf::Keyboard::Space) //example of key press event
		{
			player.firegun();
		}

	}


}
//window settings
void App::initWin()
{ 
	window = new sf::RenderWindow(sf::VideoMode(1000, 1000), "PA9");
	window->setVerticalSyncEnabled(true);
	
}
