#pragma once
#include "Jogo.h"

#define JUMPING_HEIGHT 200.f

enum PLAYER_ANIMATION_STATES { IDLE = 0, MOVING_LEFT, MOVING_RIGHT, JUMPING, FALLING };

class Personagem
{
protected:

	sf::Sprite sprite;
	sf::Texture textureSheet;
	sf::Clock animationTimer;


	//Animation
	sf::IntRect currentFrame;
	bool animationSwitch;
	short animState;


	//Physics
	sf::Vector2f velocity;
	float velocityMax;
	float velocityMin;
	float acceleration;
	float drag;
	float gravity;
	float velocityMaxY;


	//Core
	virtual void initPhysics() = 0;
	virtual void initTexture() = 0;
	void initVariables();
	void initSprite();
	void initAnimations();


public:

	//Constructor / Destructor
	Personagem();
	~Personagem();


	//Accessors
	const sf::FloatRect getGlobalBounds() const;
	const sf::Vector2f getPosition() const;
	const bool& getAnimSwitch();
	bool canJump;


	//Modifiers
	void setPosition(const float x, const float y);
	void resetVelocityY();


	//Functions
	virtual sf::Vector2f updateMovement(sf::Vector2f pos) = 0;
	void move(const float x, const float y);
	void resetAnimationTimer();
	void updateAnimations();
	void updatePhysics();

	void update();
	void render(sf::RenderTarget& target);
};