#pragma once

#include "Bob.h"
#include "pch.h"

class SpriteComponents : public Bob {

private:
	bool animated = false;
	int frames = 0;
	int speed = 100;

public:
	SpriteComponents() = default;
	SpriteComponents(const char* path) {
		setTex(path);
	}

	SpriteComponents(const char* path, int nFrames, int mSpeed) 
	{
		animated = true;
		frames = nFrames;
		speed = mSpeed;
		setTex(path);
	}

	void setTex(const char* path) {
		Texture texture = path;
	}
};
