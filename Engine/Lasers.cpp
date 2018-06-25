#include "Lasers.h"
#include <assert.h>

Lasers::Lasers(const int in_x, const int in_y)
{
	assert(initialized == false);
	x = in_x;
	y = in_y;
	initialized = true;
}

void Lasers::Draw(Graphics& gfx) const
{
	for (int Y = y; Y < y + Height; ++Y)
	{
		for (int X = x; X < x + Width; ++X)
		{
			gfx.PutPixel(X, Y, 93, 213, 93);
		}
	}
}
