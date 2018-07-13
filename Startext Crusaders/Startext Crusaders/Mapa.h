#pragma once

#include "Cuarto.h"
#include <iostream>
class Mapa
{
public:
	cuarto** arreglo;

	Mapa();
	~Mapa();
	void printMapa();
};
