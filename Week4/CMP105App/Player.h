#pragma once
#include "Framework/GameObject.h"
#include <string.h>
#include <iostream>

class Player : public GameObject
{
public:
    Player();
    ~Player();

    
    void handleInput(float dt);
    void update(float dt);

private:
    Input in;
    sf::RectangleShape playerObject;
    sf::Texture mushroom;


};

