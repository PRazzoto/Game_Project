#pragma once
#include "Personagem.h"

#define JUMPING_HEIGHT 200.f

class Player : public Personagem::Personagem
{
private:

	//Protected Functions
	void initTexture();
	void initSprite();
	void initPhysics();

public:

	//Constructor / Destructor
	Player();
	~Player();

	//Public Functions
	sf::Vector2f updateMovement(sf::Vector2f pos);

	//Collision
	void collide(Entidade* otherEntity, sf::Vector2f collision);

};