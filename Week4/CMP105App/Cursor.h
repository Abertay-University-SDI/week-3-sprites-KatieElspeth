#pragma once
#include "Framework/GameObject.h"

class Cursor : public GameObject
{
public:
	Cursor();
	~Cursor();

	void update(float dt);
	void setWindow(sf::RenderWindow* wnd);

	Input* in;
	sf::RenderWindow* window;
 

private:
	sf::Texture cursorTexture;
	
	sf::Vector2f mousePos;

};

