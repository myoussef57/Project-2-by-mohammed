#include "SaveLoad.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void SaveLoad::Save(std::string filename, int* buffer, int X_count, int Y_count)
{
	ofstream myfile;
	myfile.open(filename);

	for (size_t y = 0; y < Y_count; y++)
	{
		for (size_t x = 0; x < X_count; x++)
		{
			int i = x + y * X_count;
			myfile << buffer[i] << ", ";

		}
		myfile << std::endl;
	}

	myfile.close();
}
void SaveLoad::load(std::string& filename) 
{
	string line;
	ifstream myfile(filename);
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
	cout << line << '\n';
		}
		myfile.close();
	}
else
		cout << "Unable to open file";
	
}