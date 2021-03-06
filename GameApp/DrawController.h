#pragma once

#include <list>
#include <array>
#include "Controller.h"
#include "DrawComponent.h"

using namespace std;

class DrawController :
	public Controller
{
public:

	static const int magicNum = 1;

	static DrawController* getInstance(sf::RenderWindow* target);

	virtual ~DrawController(void);
	void takePupil(Component* pupil) override;
	void update(sf::Time deltaTime) override;

	int magicNumber() override
	{return magicNum;}

private:
	DrawController(sf::RenderWindow* target);
	array<list<DrawComponent*>,11> registeredComponents;

	sf::RenderWindow* targetWindow;

	static DrawController* instance;
};



