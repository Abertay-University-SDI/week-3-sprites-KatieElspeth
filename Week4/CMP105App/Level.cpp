#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects

	p.setInput(in);

	enemy1.setWindow(hwnd);

	enemy2.setWindow(hwnd);
	enemy2.setPosition(600, 600);
	beachBall.loadFromFile("gfx/soraSprite.png");
	enemy2.setTexture(&beachBall);

	levelBackground.setInput(in);
	levelBackground.setWindow(hwnd);

	c.setWindow(hwnd);
	c.setInput(in);
	
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

	levelBackground.handleInput(dt);

	window->setMouseCursorVisible(false);

}

// Update game objects
void Level::update(float dt)
{
	p.update(dt);
	enemy1.update(dt);
	enemy2.update(dt);
	levelBackground.update(dt);
	c.update(dt);

}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(levelBackground);
	window->draw(p);
	window->draw(enemy1);
	window->draw(enemy2);
	window->draw(c); 
	

	endDraw();
}
