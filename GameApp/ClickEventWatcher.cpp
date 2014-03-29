#include "stdafx.h"
#include "ClickEventWatcher.h"


ClickEventWatcher::ClickEventWatcher(void):allEvents()
{
}


ClickEventWatcher::~ClickEventWatcher(void)
{
}

void ClickEventWatcher::update(sf::Time deltaTime)
{
}

//does nothing.  Do not Use.
void ClickEventWatcher::takePupil(Component* pupil)
{
}

void ClickEventWatcher::clickEventRegister(const sf::Transformable *clickArea, void *callback(int,int), int Radius)
{
}
