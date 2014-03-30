#pragma once

class Rotatable
{

private:
	Rotatable(void);
	~Rotatable(void);

public:
	virtual float rotation();
	virtual sf::Vector2f position();
	virtual sf::Vector2f originDisplacement();
};

