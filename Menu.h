#pragma once
#include "pch.h"
#include "SFML/Graphics.hpp"



#define MAX_NUMBER_OF_ITEMS 3

class Menu
{
	public:
		Menu(float widh, float height);
		~Menu();
		void draw(sf::RenderWindow &window);
		void moveUp();
		void moveDown();
		

private:
	int selectedItemIndex;
	sf::Font font;
	sf::Text text[MAX_NUMBER_OF_ITEMS];
};