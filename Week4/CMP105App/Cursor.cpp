#include "Cursor.h"

Cursor::Cursor() {
	setPosition(100, 100); //placeholder
	cursorTexture.loadFromFile("gfx/icon.png");
	setTexture(&cursorTexture);
	setSize(sf::Vector2f(100, 100));


}

Cursor::~Cursor() {

}

void Cursor::setWindow(sf::RenderWindow* wnd) {
	window = wnd;
}

void Cursor::update(float dt) {

	mousePos.x = input->getMouseX();
	mousePos.y = input->getMouseY();
	
	setPosition(mousePos.x, mousePos.y);
}
