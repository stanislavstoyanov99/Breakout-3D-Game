#include "Ball.h"

Ball::Ball()
	: Model("", false)
{
	
}

Ball::Ball(std::string const& path, bool gamma)
	: Model(path, gamma)
{
	position = { 0.0f, 0.0f, 0.0f };
	scale = { 1.0f, 1.0f, 0.0f };
	velocity = { 0.0f, 0.0f, 0.0f };
	
	radius = 1.0f;
}