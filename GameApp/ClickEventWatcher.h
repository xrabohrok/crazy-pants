#pragma once

#include <list>
#include "Controller.h"
#include "Rotatable.h"

using namespace std;

struct ClickEvent
{
	void (*onEventAction)(int,int);

	Rotatable *detectionArea;

	ClickEvent(Rotatable* input, void callback(int,int))
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
	void clickEventRegister(Rotatable *clickArea, void callback(int,int));

	int magicNumber() override
	{
		return 2;
	};

	ClickEventWatcher(void);
	~ClickEventWatcher(void);

private:
	list<ClickEvent*> allEvents;
	

};


