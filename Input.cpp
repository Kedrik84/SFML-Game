#include "pch.h"
#include "Engine.h"

void Engine::input()
{
	/////////////////////////////////////////////////////////////////////////
	/*
	Event event;
	while (m_Window.pollEvent(event))
	{
		if (event.type == sf::Event::KeyPressed)
		{
			if (event.key.code == sf::Keyboard::F5)
			{
				// Capturing the window to a sf::Image
				sf::Image screenshot = m_Window.capture();


				// Making the screenshot name
				std::string screenshotName = "screenshot";

				// Saving to a file
				screenshot.saveToFile("screenshots/" + screenshotName + ".png");
			}
		}

	}
	*/
	////////////////////////////////////////////////////////////////////////


	// Handle the player quitting
	if (Keyboard::isKeyPressed(Keyboard::Escape))
	{
		m_Window.close();
	}

	if (Keyboard::isKeyPressed(Keyboard::I))
	{
		Engine::Menu();
		while (m_menu.isOpen()) {
			if (Keyboard::isKeyPressed(Keyboard::Tab)) {
				m_menu.close();
			}
		}
	}

	if (sf::Keyboard::Tab)
	{
		
	}


	// Handle the player moving
	if (Keyboard::isKeyPressed(Keyboard::A))
	{
		m_Bob.moveLeft();
	}
	else
	{
		m_Bob.stopLeft();
	}

	if (Keyboard::isKeyPressed(Keyboard::D))
	{
		m_Bob.moveRight();
	}
	else
	{
		m_Bob.stopRight();
	}
	if (Keyboard::isKeyPressed(Keyboard::W))
	{
		m_Bob.moveUp();
	}
	else
	{
		m_Bob.stopUp();
	}

	if (Keyboard::isKeyPressed(Keyboard::S))
	{
		m_Bob.moveDown();
	}
	else
	{
		m_Bob.stopDown();
	}

}