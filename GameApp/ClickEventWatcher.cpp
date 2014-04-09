#include "stdafx.h"
#include "ClickEventWatcher.h"



ClickEventWatcher::ClickEventWatcher(void):allEvents()
{
}


ClickEventWatcher::~ClickEventWatcher(void)
{
	list<ClickEvent*>::iterator iter;
	for(iter = allEvents.begin(); iter != allEvents.end(); iter++)
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

void ClickEventWatcher::clickEventRegister(Rotatable *clickArea, void callback(int,int))
{
	allEvents.push_back(new ClickEvent(clickArea, callback));
}
