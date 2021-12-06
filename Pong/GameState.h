#pragma once

//will use to create "game states" like main game
#include "State.h"
#include "Header.h"

class GameState :
    public State
{
public:
    GameState();
    ~GameState();

    void update();
    void render();

private:

    vector<sf::Texture> tex; //textures

};

