#include "Enemy.h"

Enemy::Enemy() {
	setPosition(sf::Vector2f(500, 500));
	setSize(sf::Vector2f(100, 100));
	setVelocity(100, 100);
	
	goomba.loadFromFile("gfx/Goomba.png");
	setTexture(&goomba);
}

Enemy::~Enemy() {

}

void Enemy::setWindow(sf::RenderWindow* wnd) {
	window = wnd;
}

void Enemy::update(float dt) {
	move(velocity * dt);

	if (getPosition().x > window->getSize().x - 100) {
		setVelocity(getVelocity().x - 0.1, getVelocity().y);
	}
	if (getPosition().y > window->getSize().y - 100) {
		setVelocity(getVelocity().x, getVelocity().y - 0.1);
	}
	if (getPosition().x < 0) {
		setVelocity(getVelocity().x + 0.1, getVelocity().y);
	}
	if (getPosition().y < 0) {
		setVelocity(getVelocity().x, getVelocity().y + 0.1);
	}
}

