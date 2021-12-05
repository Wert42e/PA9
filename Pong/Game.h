#pragma once




#include "guy.h"


class Game
{
public:
	Game();
	~Game();

	void update();
	void render();
	void updatedt();

	void run();

private:

	double dt; //deltatime
	sf::Clock dClock;

	sf::Event ev;

	sf::RenderWindow *window; //pointer so we can dynamically change it (may change)
	void initWin(); //function to create windows

	

};