#pragma once
#include "guy.h"
#include "Header.h"

//prototype class to be inherated for "game" state, "menu" state,  
//will keep track of everything on the screen during this state

class State
{
public:
	State() = default;

	virtual ~State() = default;

	virtual void update() = 0;
	virtual void render() = 0;

private:

};

