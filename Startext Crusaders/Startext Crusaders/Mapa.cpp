#include "Mapa.h"

Mapa::Mapa()
{
	arreglo = new cuarto*[10];
	for (int i = 0; i < 10; ++i)
		arreglo[i] = new cuarto[10];
	for (int i = 0; i < 10; ++i)
		for (int j = 0; j < 10; ++j)
			arreglo[i][j] = cuarto(i, j);
}

Mapa::~Mapa()
{

}

void Mapa::printMapa()
{
	for (int i = 0; i < 10; ++i)
		for (int j = 0; j < 10; ++j)
			std::cout << arreglo[i][j].descripcion << " "  << arreglo[i][j].cuartoX << " " <<
				arreglo[i][j].cuartoY << std::endl;
}
