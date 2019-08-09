
#include "pch.h"
#include "Engine.h"
#include "Menu.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(600, 600), "The Game");
	
	Menu menu(window.getSize().x, window.getSize());

	while(window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:window.close();
				break;
			}
		}
	}

	window.clear();

	menu.draw(window);
	// Declare an instance of Engine
	Engine engine;
	
	// Start the engine
	engine.start();
	
	
	// Quit in the usual way when the engine is stopped
	return 0;
}