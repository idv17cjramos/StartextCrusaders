
#pragma once
#include "RPG.h"

class Jugador : public RPG //herencia es publica para que podamos usarlo.
{
public://public para que pueda uarlo
	
	Jugador();
	Jugador(std::string nombre);
	~Jugador();
};