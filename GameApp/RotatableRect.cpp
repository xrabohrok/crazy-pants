#include "stdafx.h"
#include "RotatableRect.h"


RotatableRect::RotatableRect(void)
{
}


RotatableRect::~RotatableRect(void)
{
}

float RotatableRect::rotation()
{
	return 0;
}
sf::Vector2f RotatableRect::position()
{
	sf::Vector2f nothing(0,0);
	return nothing;
}
sf::Vector2f RotatableRect::originDisplacement()
{
	sf::Vector2f nothing(0,0);
	return nothing;
}

float RotatableRect::width()
{return 0;}

float RotatableRect::height()
{return 0;}