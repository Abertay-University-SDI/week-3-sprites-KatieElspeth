#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects

	p.setInput(in);
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}

	p.handleInput(dt);

}

// Update game objects
void Level::update(float dt)
{
	p.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(p);
	window->draw(enemy1);

	endDraw();
}
