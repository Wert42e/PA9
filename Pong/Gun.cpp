#include "Gun.h"





void Gun::fireBullet(const sf::Vector2f& newPosition)
{


	if (clock.getElapsedTime().asMilliseconds() > 300)
	{

		Bullet* nBul = new Bullet(6, sf::Color::White, newPosition);
		vBull.push_back(*nBul);
		clock.restart();
	}

}

void Gun::test()
{

}

void Gun::update()
{
	for (int i = 0; i < vBull.size(); i++)
	{
		vBull[i].move(0, -4);

	}

}

vector<Bullet> Gun::getBullets()
{
	return vBull;
}

