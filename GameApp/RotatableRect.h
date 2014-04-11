#pragma once

class RotatableRect
{

protected:
	RotatableRect(void);
	~RotatableRect(void);

public:
	virtual float rotation();
	virtual sf::Vector2f position();
	virtual sf::Vector2f originDisplacement();
	virtual float width();
	virtual float height();
};

