#pragma once
#include "Personagem.h"

class Inimigo : public Personagem
{

private:
	//Fun��es Privadas
	virtual void initTexture();
	void initPhysics();


public:
	//Fun��es P�blicas
	sf::Vector2f updateMovement(sf::Vector2f pos);


	//Constructor / Destructor
	Inimigo();
	~Inimigo();


};