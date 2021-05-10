#pragma once

#include "app.h"
#include "grid.h"
#include "SaveLoad.h"
#include "SpriteAnimator.h"
class Example : public App
{
public:
	Example();
	virtual ~Example();
	virtual bool start();
	virtual void update(float deltaT);
	virtual void render();
	virtual void cleanup();
	static Example &inst();

	sf::Sprite *m_backgroundSprite;

	sf::Texture *brownbrickTexture;
	sf::Texture *redbrickTexture;
	sf::Texture *bluebrickTexture;
	sf::Texture *blackbrickTexture;
	
	grid Grid;
	Animator SpriteAnimator;
};
