#include "Player.h"

Player::Player() {
	setPosition(sf::Vector2f(100, 100));
	setSize(sf::Vector2f(100, 100));

	mushroom.loadFromFile("gfx/Mushroom.png");
	setTexture(&mushroom);

	
}

Player::~Player() {

}

void Player::handleInput(float dt) {

	if (input->isKeyDown(sf::Keyboard::D)) {
		setVelocity(getVelocity().x + 0.1, getVelocity().y);
	}
	if (input->isKeyDown(sf::Keyboard::A)) {
		setVelocity(getVelocity().x + -0.1, getVelocity().y);
	}
	if (input->isKeyDown(sf::Keyboard::W)) {
		setVelocity(getVelocity().x, getVelocity().y + -0.1);
	}
	if (input->isKeyDown(sf::Keyboard::S)) {
		setVelocity(getVelocity().x, getVelocity().y + 0.1);
	}
}

void Player::update(float dt) {
	move(velocity * dt);
}
