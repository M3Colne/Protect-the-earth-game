#pragma once

#include "Graphics.h"
#include "Keyboard.h"

class Lasers
{
public:
	//Functions
	Lasers(const int in_x, const int in_y);
	void Draw(Graphics& gfx) const;
	//Functions

	//Variables
	int x;
	int y;
	static constexpr int Velocity = 8;
	static constexpr int Width = 10;
	static constexpr int Height = 10;
	//Variables
private:
	//Functions
	//Functions

	//Variables
	bool initialized = false;
	//Variables
};