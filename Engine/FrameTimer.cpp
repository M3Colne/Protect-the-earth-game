#include "FrameTimer.h"

using namespace std::chrono;

FrameTimer::FrameTimer()
{
	last = steady_clock::now();
}

void FrameTimer::Reset()
{
	last = steady_clock::now();
}

float FrameTimer::Mark()
{
	const auto old = last;
	Reset();
	const duration<float> frametime = last - old;
	return frametime.count();
}
