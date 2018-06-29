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
	static constexpr int Velocity = 15;
	static constexpr int Width = 5;
	static constexpr int Height = 5;
	//Variables
private:
	//Functions
	//Functions

	//Variables
	bool initialized = false;
	//Variables
};