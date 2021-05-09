#include "example.h"


Example::Example(): App()
{
}

Example::~Example()
{
}

Example &Example::inst()
{
	static Example s_instance;
	return s_instance;
}

bool Example::start()
{
	m_backgroundSprite = kage::TextureManager::getSprite("data/sky.jpg");
	sf::Vector2u resolution = m_backgroundSprite->getTexture()->getSize();
	m_backgroundSprite->setScale(float(m_window.getSize().x) / resolution.x, float(m_window.getSize().y) / resolution.y);
	
	brownbrickTexture = kage::TextureManager::getTexture("data/BrownBrick.jpg");
	redbrickTexture = kage::TextureManager::getTexture("data/RedBrick.jpg");
	bluebrickTexture = kage::TextureManager::getTexture("data/BlueBrick.jpg");
	blackbrickTexture = kage::TextureManager::getTexture("data/BlackBrick.jpg");
	//Grid.tiles[i].setPosition(sf::Vector2f(
		//Grid_Offset_X + x * Vertical_X_Spacing,
		//Grid_Offset_Y + y * Horizontal_Y_Spacing));
	return true;
}

void Example::update(float deltaT)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape) && m_window.hasFocus())
	{
		m_running = false;
	}
	
	ImGui::Begin("Kage2D");
	if(ImGui::Button("Exit"))
	{ 
		m_running = false;
	}
	if (ImGui::ImageButton(*brownbrickTexture, sf::Vector2f(56, 56))) 
	{
		Grid.ChosenTileID = 1;
		
	}
	if (ImGui::ImageButton(*redbrickTexture, sf::Vector2f(56, 56)))
	{
		Grid.ChosenTileID = 2;
		
	}
	if (ImGui::ImageButton(*bluebrickTexture, sf::Vector2f(56, 56)))
	{
		Grid.ChosenTileID = 3;
		
	}
	if (ImGui::ImageButton(*blackbrickTexture, sf::Vector2f(56, 56)))
	{
		Grid.ChosenTileID = 4;
		
	}

	ImGui::End();

	sf::Vector2i mousePosition = sf::Mouse::getPosition(m_window);
	
	if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left) &&
		mousePosition.x >= 0 && mousePosition.x <= 504 &&
		mousePosition.y >= 0 && mousePosition.y <= 504 )
	{
		
		
		int mouseOnCellx = mousePosition.x / Cell_width;
		int mouseOnCellY = mousePosition.y / Cell_Heigth;
		int i = mouseOnCellx + mouseOnCellY * 5 ;
		
		if (Grid.ChosenTileID == 1)
		{
			Grid.tiles[i].setTexture(*brownbrickTexture);
			Grid.map[i] = 1;
		}
		if (Grid.ChosenTileID == 2)
		{
			Grid.tiles[i].setTexture(*redbrickTexture);
			Grid.map[i] = 2;
		}
		if (Grid.ChosenTileID == 3)
		{
			Grid.tiles[i].setTexture(*bluebrickTexture);
			Grid.map[i] = 3;
		}
		if (Grid.ChosenTileID == 4)
		{
			Grid.tiles[i].setTexture(*blackbrickTexture);
			Grid.map[i] = 4;
		}
		
	}

}

void Example::render()
{
	m_window.draw(*m_backgroundSprite);
	for (size_t i = 0; i < 81; i++)
	
		m_window.draw(Grid.tiles[i]);
	
	Grid.Draw(m_window);
}

void Example::cleanup()
{
	
	delete m_backgroundSprite;
}

