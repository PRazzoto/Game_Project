#include "Plataforma.h"

Plataforma::Plataforma()
{
	this->initSprite();
	this->initTexture();
}

Plataforma::~Plataforma()
{

}

void Plataforma::initSprite()
{
	this->sprite.setTexture(this->textureSheet);
	this->currentFrame = sf::IntRect(0, 0, 100, 22); 

	this->sprite.setTextureRect(this->currentFrame);
	this->sprite.setScale(3.f, 3.f);
}

void Plataforma::initTexture()
{
	if (!this->textureSheet.loadFromFile("plataforma.png"))
	{
		std::cout << "Erro ao carregar imagem" << "\n" << std::endl;
	}
}