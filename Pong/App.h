#pragma once




#include "guy.h"
#include "Stack.h"
#include "GameState.h"
#include "Header.h"

class App
{
public:
	App();
	~App();

	void update(); 
	void render();
	void updatedt();
	void updateEven(); //for event updates


	void run();

private:

	
	double dt; //deltatime, need to track time for frames
	sf::Clock dClock;

	sf::RenderWindow *window; //pointer so we can dynamically change it (may change)
	void initWin(); //function to create windows


	GameState* mainGame; //manages 
	


	sf::Event ev; 
	
};