#pragma once


//container class, manages bullets, upadates positions given speed, interact with power ups
//ought to be based on queue, should use linked list


#include "Bullet.h"
#include "Header.h"


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


