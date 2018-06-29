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
	static constexpr int Velocity = 8;
	static constexpr int Width = 20;
	static constexpr int Height = 20;
	//Variables
private:
	//Functions
	//Functions

	//Variables
	bool initialized = false;
	//Variables
};