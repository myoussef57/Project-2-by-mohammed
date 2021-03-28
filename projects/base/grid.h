#pragma once
#include <SFML/Graphics.hpp>
#include "app.h"

#define Grid_Offset_X 00
#define Grid_Offset_Y 00

#define Cell_width 55.5
#define Cell_Heigth 55.5

#define Horizontal_Array_Size 10
#define Vertical_Array_Size 10

#define Horizontal_Line_Size_X 500
#define Horizontal_Line_Size_Y 2

#define Horizontal_Line_Position_X 100
#define Horizontal_Line_Position_Y 0

#define Horizontal_Y_Spacing 56

#define Vertical_Line_Size_X 2
#define Vertical_Line_Size_Y 500

#define Vertical_Line_Position_X 0
#define Vertical_Line_Position_Y 100

#define Vertical_X_Spacing 56

class grid
{
public:
	
	grid();
	~grid();
	
	void Draw(sf::RenderWindow& window);
	sf::RectangleShape vertical_lines[Vertical_Array_Size];
	sf::RectangleShape horizontal_lines[Horizontal_Array_Size];
	sf::Sprite tiles[81];
	int map[81] = {
		0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,
	};
	
	int ChosenTileID = 0;
};

