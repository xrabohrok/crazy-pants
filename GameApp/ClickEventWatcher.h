#pragma once

#include <list>
#include "Controller.h"

using namespace std;

struct ClickEvent
{
	void *onEventAction(int,int);

	sf::Transformable *detectionArea;

	int radius;

};

class ClickEventWatcher : Controller
{
public:

	void update(sf::Time deltaTime);

	//does nothing. Do not use.
	void takePupil(Component* pupil);

	//int x, int y
	void clickEventRegister(const sf::Transformable *clickArea, void *callback(int,int), int Radius);

	int magicNumber() override
	{
		return 2;
	};

	ClickEventWatcher(void);
	~ClickEventWatcher(void);

private:
	list<ClickEvent> allEvents;
	

};


