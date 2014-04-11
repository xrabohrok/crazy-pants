#pragma once

#include <list>
#include "Controller.h"
#include "RotatableRect.h"

using namespace std;

struct ClickEvent
{
	void (*onEventAction)(int,int);

	RotatableRect *detectionArea;

	ClickEvent(RotatableRect* input, void callback(int,int))
	{
		detectionArea = input;
		onEventAction = callback;
	}
};

class ClickEventWatcher : Controller
{
public:

	void update(sf::Time deltaTime);

	//does nothing. Do not use.
	void takePupil(Component* pupil);

	//int x, int y
	void clickEventRegister(RotatableRect *clickArea, void callback(int,int));

	int magicNumber() override
	{
		return 2;
	};

	ClickEventWatcher(void);
	~ClickEventWatcher(void);

private:
	list<ClickEvent*> allEvents;
	

};


