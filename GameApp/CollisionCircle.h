
class CollisionCircle
{
protected:
	CollisionCircle(void);
	virtual ~CollisionCircle(void);

public:
	virtual float rotation();
	virtual sf::Vector2f position();
	virtual sf::Vector2f originDisplacement();
	virtual float radius();
};
