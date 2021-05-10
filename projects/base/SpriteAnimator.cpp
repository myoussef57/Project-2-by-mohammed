#include "SpriteAnimator.h"
#include <kage2dutil/texture_manager.h>




Animator::Animator()
{
}

Animator::~Animator()
{
}

void Animator::Init()
{
}

void Animator::Load(std::string filename)
{
	spriteSheet = kage::TextureManager::getTexture(filename);
	spriteSheet.setTexture(*spriteSheet);
	spriteSheet.setTexture(sf::IntRect(85, 0, 85, 85));
}

void Animator::Update()
{
}

void Animator::Render()
{
}
