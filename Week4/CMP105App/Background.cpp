
#include "Background.h"

Background::Background() {

	bg.loadFromFile("gfx/Level1_1.png");
	setTexture(&bg);
	setSize(sf::Vector2f(11038, 675));

	


}

Background::~Background() {

}

void Background::setWindow(sf::RenderWindow* wnd) { 
	window = wnd; 
}

void Background::update(float dt) {

	sf::View v = window->getView();  

	if (v.getCenter().x > 11038 - window->getSize().x) { 
		v.setCenter(v.getCenter().x - 5, v.getCenter().y); 
	}
	if (v.getCenter().x < 0 + window->getSize().x) {
		v.setCenter(v.getCenter().x + 5, v.getCenter().y);
	}
	window->setView(v);
	
}

void Background::handleInput(float dt) {
	sf::View v = window->getView(); 

	if (input->isKeyDown(sf::Keyboard::Right)) {
		v.setCenter(v.getCenter().x + 5, v.getCenter().y); 
	}
	if (input->isKeyDown(sf::Keyboard::Left)) {
		v.setCenter(v.getCenter().x - 5, v.getCenter().y);
	}
	window->setView(v);
}


