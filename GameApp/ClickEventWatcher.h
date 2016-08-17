#pragma once

#include <list>
#include "Controller.h"
#include "RotatableRect.h"
#include "CollisionCircle.h"

using namespace std;

struct RectClickEvent
{
	void (*onEventAction)(int,int);

	RotatableRect *detectionArea;

	RectClickEvent(RotatableRect* input, void callback(int,int))
	{
		detectionArea = input;
		onEventAction = callback;
	}
};

struct CircleClickEvent
{
	void (*onEventAction)(int,int);

	CollisionCircle *detectionArea;

	CircleClickEvent(CollisionCircle* input, void callback(int,int))
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

	//int x, int y of the mouse
	void clickEventRegister(RotatableRect *clickArea, void callback(int,int));
	void clickEventRegister(CollisionCircle *clickArea, void callback(int,int));


	int magicNumber() override
	{
		return 2;
	};

	ClickEventWatcher(void);
	~ClickEventWatcher(void);

private:
	list<CircleClickEvent*> allCircleEvents;
	list<RectClickEvent*> allRectEvents;
};


