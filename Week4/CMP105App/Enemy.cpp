#include "Enemy.h"

Enemy::Enemy() {
	setPosition(sf::Vector2f(500, 500));
	setSize(sf::Vector2f(100, 100));

	goomba.loadFromFile("gfx/Goomba.png");
	setTexture(&goomba);
}

Enemy::~Enemy() {

}

void Enemy::setWindow(sf::RenderWindow* wnd) {
	window = wnd;
}

void Enemy::update(float dt) {

}

