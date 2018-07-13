#pragma once
#include <string>

enum contenidoHabitacion 
{
	llave,
	objeto,
	enemigo,
	vacia,
	stand,
	finDeTipos
};

class cuarto
{
public:
	int cuartoX;
	int cuartoY;

	contenidoHabitacion tipo;//contenido habitacion es un tipo de dato
	std::string descripcion;

	cuarto();
	cuarto(int X, int Y);
	~cuarto();
};