#pragma once

#include "Graphics.h"

class Player
{
public:
	void Draw(Graphics& gfx) const;
	int GetWidth() const;
	int GetHeight() const;
private:
	static constexpr int Width = 160;
	static constexpr int Height = 160;
	const int x = Graphics::ScreenWidth / 2 - Width / 2;
	const int y = Graphics::ScreenHeight / 2 - Height / 2;
};