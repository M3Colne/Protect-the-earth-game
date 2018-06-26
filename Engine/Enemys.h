#pragma once

#include "Graphics.h"

class Enemy
{
public:
	//Functions
	Enemy(int in_x, int in_y);
	void Draw(Graphics& gfx);
	//Functions

	//Variables
	int x;
	int y;
	static constexpr int Width = 30;
	static constexpr int Height = 30;
	static constexpr int Velocity = 6;
	//Variables
private:
	//Functions
	//Functions

	//Variables
	bool initialized = false;
	//Variables
};