#pragma once


//container class, manages bullets, upadates positions given speed, interact with power ups
//ought to be based on queue, should use linked list


#include "Bullet.h"


class Gun
{
public:
	Gun() = default;
	~Gun() = default;

//	bool push(Bullet& newItem);
//	bool pop(Bullet& poppedItem);



	void fireBullet(const sf::Vector2f& newPosition);

	void test();
	

	void update();
	
	vector<Bullet> getBullets();


private:

	sf::Clock clock; //time since last fire

	vector<Bullet> vBull; //vector of bullets


};





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

