#pragma once
#include "Framework/GameObject.h"

class Enemy : public GameObject
{
public:
	Enemy();
	~Enemy();

	void update(float dt);
	void setWindow(sf::RenderWindow* wnd);


private:
	sf::Texture goomba;
	sf::Texture beachBall;

	sf::RenderWindow* window;
};

