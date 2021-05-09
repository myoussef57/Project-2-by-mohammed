#pragma once
#include <string>
#include <SFML/Graphics.hpp>
class Animator
{
private:
	sf::Texture*::spriteSheet;
public:
	Animator();
	~Animator();

	void Init();
	void Load(std::string filename);
	
	void Update();
	void Render();
	 

};

