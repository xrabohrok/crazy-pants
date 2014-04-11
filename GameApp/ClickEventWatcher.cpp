#include "stdafx.h"
#include "ClickEventWatcher.h"



ClickEventWatcher::ClickEventWatcher(void):allRectEvents(),allCircleEvents()
{
}


ClickEventWatcher::~ClickEventWatcher(void)
{
	list<RectClickEvent*>::iterator iter;
	for(iter = allRectEvents.begin(); iter != allRectEvents.end(); iter++)
	{
		delete (*iter);
	}
}

void ClickEventWatcher::update(sf::Time deltaTime)
{
}

//does nothing.  Do not Use.
void ClickEventWatcher::takePupil(Component* pupil)
{
}

void ClickEventWatcher::clickEventRegister(RotatableRect *clickArea, void callback(int,int))
{
	allRectEvents.push_back(new RectClickEvent(clickArea, callback));
}

void ClickEventWatcher::clickEventRegister(CollisionCircle *clickArea, void callback(int,int))
{
	allCircleEvents.push_back(new CircleClickEvent(clickArea, callback));
}