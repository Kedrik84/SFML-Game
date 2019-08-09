#include "pch.h"
#include "bob.h"
#include "SFML/Graphics.hpp"


//TODO :: ADD KNIGHT SPRITE ANIMATION 


Bob::Bob()
{
	// How fast does Bob move?
	m_Speed = 400;

	// Associate a texture with the sprite
	m_Texture.loadFromFile("hero/hero_idle_anim.gif");
	m_Sprite.setTexture(m_Texture);

	// Set the Bob's starting position
	m_Position.x = 500;
	m_Position.y = 1050;

}


// Make the private spite available to the draw() function
Sprite Bob::getSprite()
{
	return m_Sprite;
}


void Bob::moveLeft()
{
	m_LeftPressed = true;

}

void Bob::moveRight()
{
	m_RightPressed = true;
	
}

void Bob::stopLeft()
{
	m_LeftPressed = false;
}

void Bob::stopRight()
{
	m_RightPressed = false;
}

void Bob::moveUp()
{
	m_UpPressed = true;
	
}


void Bob::stopUp()
{
	m_UpPressed = false;
}

void Bob::moveDown()
{
	m_DownPressed = true;
	
}

void Bob::stopDown()
{
	m_DownPressed = false;
}



// Move Bob based on the input this frame, 
// the time elapsed, and the speed
void Bob::update(float elapsedTime)
{
	

	
	//walk action
	if (m_RightPressed || m_DownPressed || m_UpPressed || m_LeftPressed)
	{

		if (m_RightPressed)
		{
			m_Position.x += (m_Speed / 1.5) * elapsedTime;
			m_Texture.loadFromFile("hero/hero_run_anim.gif");
		}

		if (m_UpPressed)
		{
			m_Position.y -= (m_Speed / 1.5) * elapsedTime;
			if (m_UpPressed && m_LeftPressed) {
				m_Texture.loadFromFile("hero/hero_runLeft_anim.png");
			}
			else
			{
				m_Texture.loadFromFile("hero/hero_run_anim.gif");
			}
		}

		if (m_DownPressed)
		{
			m_Position.y += (m_Speed / 1.5) * elapsedTime;
			if (m_DownPressed && m_LeftPressed) {
				m_Texture.loadFromFile("hero/hero_runLeft_anim.png");
			}
			else
			{
				m_Texture.loadFromFile("hero/hero_run_anim.gif");
			}
		}

		if (m_LeftPressed)
		{
			m_Position.x -= (m_Speed / 1.5) * elapsedTime;
			m_Texture.loadFromFile("hero/hero_runLeft_anim.png");
		}
	}
		else
		{
			m_Texture.loadFromFile("hero/hero_idle_anim.gif");
		}
	
	
	// Now move the sprite to its new position
	m_Sprite.setPosition(m_Position);

}