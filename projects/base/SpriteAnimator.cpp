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
}

void Animator::Update()
{
}

void Animator::Render()
{
}
