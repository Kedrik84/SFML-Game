#include "pch.h"
#include "Engine.h"

Engine::Engine()
{
	// Get the screen resolution and create an SFML window and View
	Vector2f resolution;
	resolution.x = 2560;
	resolution.y = 1440;

	

	m_Window.create(VideoMode(resolution.x, resolution.y),
		"Simple Game Engine",
		Style::Fullscreen);

	// Load the background into the texture
	// Be sure to scale this image to your screen size
	m_BackgroundTexture.loadFromFile("beginner village prototype.jpg");

	// Associate the sprite with the texture
	m_BackgroundSprite.setTexture(m_BackgroundTexture);

}

void Engine::start()
{
	// Timing
	Clock clock;

	while (m_Window.isOpen())
	{			
		// Restart the clock and save the elapsed time into dt
		Time dt = clock.restart();

		// Make a fraction from the delta time
		float dtAsSeconds = dt.asSeconds();
		
		input();
		update(dtAsSeconds);
		draw();
	}

	
}
void Engine::Menu() {
	Clock clock;
	m_menu.create(sf::VideoMode(800, 600, 32), "Menu", Style::Default);
	Time dt = clock.restart();
	float dtAsSeconds = dt.asSeconds();

	input();
	update(dtAsSeconds);
	draw();
}
