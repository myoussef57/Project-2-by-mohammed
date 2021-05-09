#pragma once
#include <iostream>
class SaveLoad
{
public:
	static void Save(std::string filename, int* buffer, int X_count, int Y_count);
	static void load(std::string& filename);
};

