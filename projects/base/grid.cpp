#include "grid.h"
#include <SFML/Graphics.hpp>

	 grid::grid()
	{
		for (size_t i = 0; i < Horizontal_Array_Size; i++)
		{
			horizontal_lines[i].setSize(sf::Vector2f(Horizontal_Line_Size_X, Horizontal_Line_Size_Y));
			horizontal_lines[i].setPosition(
				sf::Vector2f(
					Grid_Offset_X, 
					Grid_Offset_Y + i * Cell_Heigth)
					
			);
		}
		
		for (size_t i = 0; i < Vertical_Array_Size; i++)
		{
			vertical_lines[i].setSize(sf::Vector2f(Vertical_Line_Size_X, Vertical_Line_Size_Y));
			vertical_lines[i].setPosition(
				sf::Vector2f(
					Grid_Offset_X + i * Cell_width,
					Grid_Offset_Y)
			);
		}
		
	}
	
	 grid::~grid()
	 {

	 }
	 
	 void grid::Draw(sf::RenderWindow& window)
	 {
		 for (size_t i = 0; i < Horizontal_Array_Size; i++)
		 {
			 window.draw(horizontal_lines[i]);
		 }

		 for (size_t i = 0; i < Vertical_Array_Size; i++)
		 {
			 window.draw(vertical_lines[i]);
		 }
	 }