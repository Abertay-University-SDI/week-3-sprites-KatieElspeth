#pragma once
#include "Framework/GameObject.h"
#include <iostream>

class Background : public GameObject
{
public:
	Background();
	~Background();

	void setWindow(sf::RenderWindow* wnd); 
	void handleInput(float dt);
	void update(float dt);

	Input* in;
	sf::RenderWindow* window;

private:
	
	sf::Texture bg;

};
