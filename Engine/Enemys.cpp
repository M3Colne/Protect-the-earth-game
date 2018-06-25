#include "Enemys.h"
#include <assert.h>

Enemy::Enemy(int in_x, int in_y)
{
	assert(initialized == false);
	x = in_x;
	y = in_y;
	initialized = true;
}

void Enemy::Draw(Graphics & gfx)
{
	for (int gfxx = x; gfxx < x + Width; ++gfxx)
	{
		for (int gfxy = y; gfxy < y + Height; ++gfxy)
		{
			gfx.PutPixel(gfxx, gfxy, 255, 255, 255);
		}
	}
}